bool backspaceCompare(char* s, char* t) {
    int top1=-1,top2=-1;
    char stack1[200];
    char stack2[200];
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='#'){
            if(top1>=0)
            top1--;
        }
        else
        stack1[++top1]=s[i];

    }
    for(int j=0;j<strlen(t);j++){
        if(t[j]=='#') {
            if(top2>=0)
            top2--;
        }
        else
        stack2[++top2]=t[j];
    }
    if(top1!=top2) return 0;
    for(int i=0;i<=top1;i++){
        if(stack1[i]!=stack2[i])
        return 0;
    }
    return 1;
}
