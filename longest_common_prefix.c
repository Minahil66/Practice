char* longestCommonPrefix(char** strs, int strsSize) {
     if (strsSize == 0) return "";
    if (strsSize == 1) return strs[0];
    
    char* first = strs[0];
    
    int minLen = strlen(first);
    for (int i = 1; i < strsSize; i++) {
        int len = strlen(strs[i]);
        if (len < minLen) {
            minLen = len;
        }
    }
    
    int prefixLen = 0;
    for (int i = 0; i < minLen; i++) {
        char currentChar = first[i];
        int allMatch = 1;
        
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != currentChar) {
                allMatch = 0;
                break;
            }
        }
        
        if (allMatch) {
            prefixLen++;
        } else {
            break;
        }
    }
    
    if (prefixLen == 0) return "";
    
    char* result = (char*)malloc((prefixLen + 1) * sizeof(char));
    strncpy(result, first, prefixLen);
    result[prefixLen] = '\0';
    
    return result;
}
