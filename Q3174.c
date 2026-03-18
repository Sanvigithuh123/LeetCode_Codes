char* clearDigits(char* s) {
    int n=strlen(s),top=-1;
    char *stack=(char*)malloc((n+1)*sizeof(char));

    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            if(top>-1) top--;
        }
        else{
            stack[++top]=s[i];
        }
    }
    stack[++top]='\0';
    return stack;
}
