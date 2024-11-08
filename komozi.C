int main(void)
{
    int diff;
    char large; //大文字
    char small; //小文字
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c" , &small);
    diff='a'-'A'; 
    large=small-diff;
    
    printf("大文字は%c  小文字は%c\n",large,small);
    

    return 0;
}