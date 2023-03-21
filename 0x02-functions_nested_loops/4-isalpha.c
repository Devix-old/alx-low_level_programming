/* more headers goes there */
/* betty style doc for function main goes there*/
/**
 * main - prints all alphabet in lower case x 10.
 *
 * Return: Always 0 (Success)
 */
int main() {
    
int is_lower(int c){
    if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')){
        return (1);
	else{
		return (0);
	}
}

}
for (int i=0;i<=255;i++){
    is_lower(i);
}
}

