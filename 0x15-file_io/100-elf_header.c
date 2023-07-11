#include <fcntl.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 64

/**
 * struct ElfHeader - Represents the ELF header structure
 * @magic:       The magic number identifying the file as an ELF file
 * @class:       The class of the ELF file (32-bit or 64-bit)
 * @data:        The data encoding of the processor-specific data in the file
 * @version:     The version of the ELF file format
 * @os_abi:      The operating system and ABI to which the file is targeted
 * @abi_version: The version of the ABI to which the file is targeted
 * @unused:      Unused bytes in the ELF header
 * @type:        The type of the ELF file (e.g., executable, shared object)
 * @machine:     The target instruction set architecture of the ELF file
 * @version_elf: The version of the ELF file format
 * @entry_point: The virtual address at which the process starts executing
 *
 * The ElfHeader struct represents the ELF header structure
 * defined in the ELF file format.
 */
typedef struct
{
	uint8_t magic[4];
	uint8_t class;
	uint8_t data;
	uint8_t version;
	uint8_t os_abi;
	uint8_t abi_version;
	uint8_t unused[7];
	uint16_t type;
	uint16_t machine;
	uint32_t version_elf;
	uint64_t entry_point;
} ElfHeader;

/**
 * display_error - Displays an error message and exits with status code 98
 * @message: The error message to display
 *
 * This function prints the specified error message to the stderr
 * stream and exits the program with status code 98.
 */
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header - Displays the information contained in the ELF header
 * @header: The ELF header structure to display
 *
 * This function takes an ELF header structure as input and prints
 * the information contained in the header to the stdout stream.
 */
void display_elf_header(ElfHeader header)
{
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n",
	       header.magic[0], header.magic[1], header.magic[2], header.magic[3]);
	printf("  Class:                             ");
	switch (header.class)
	{
	case 1:
		printf("ELF32\n");
		break;
	case 2:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
	printf("  Data:                              ");
	switch (header.data)
	{
	case 1:
		printf("2's complement, little endian\n");
		break;
	case 2:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
	printf("  Version:                           %d (current)\n", header.version);
	printf("  OS/ABI:                            ");
	switch (header.os_abi)
	{
		// ...
	}
	// ...
}

/**
 * read_elf_header - Reads and displays the ELF header of the given file
 * @fd: The file descriptor of the ELF file
 *
 * This function reads the ELF header from the specified file descriptor
 * and displays the information contained in the header using the
 * display_elf_header function.
 */
void read_elf_header(int fd)
{
	ElfHeader header;
	ssize_t bytes_read = read(fd, &header, sizeof(ElfHeader));
	if (bytes_read == -1)
	{
		display_error("Error reading file");
	}
	else if (bytes_read != sizeof(ElfHeader))
	{
		display_error("Invalid ELF header");
	}
	display_elf_header(header);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * This function is the entry point of the program. It checks the command-line
 * arguments, opens the specified ELF file, and calls the read_elf_header
 * function to read and display the ELF header.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("Error opening file");
	}

	struct stat file_stat;
	if (fstat(fd, &file_stat) == -1)
	{
		close(fd);
		display_error("Error retrieving file information");
	}

	if (S_ISDIR(file_stat.st_mode))
	{
		close(fd);
		display_error("Error: File is a directory");
	}

	read_elf_header(fd);

	close(fd);
	return 0;
}
