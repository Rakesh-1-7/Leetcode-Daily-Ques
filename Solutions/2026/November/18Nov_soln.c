int minChanges(char* s) {
    int result = 0;
    size_t length = strlen(s);
    for(int i=1; i < length; i = i + 2){
        if(s[i-1] != s[i])
        result += 1;
    }
    return result;
}