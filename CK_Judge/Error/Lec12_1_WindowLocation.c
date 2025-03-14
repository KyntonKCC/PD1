#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char * protocol;
    char * host;
    char * pathname;
    char * search;
    char * hash;
    int port;
} Location;

Location * parse_url(char *);

int main(){
    char url[500] = "";
    fgets(url, 500, stdin); // Get url string
    Location * l = parse_url(url);
    printf("Location {\n  protocol: %s,\n  host: %s,\n", l->protocol, l->host);
    if (l->port){
        printf("  port: %d,\n", l->port);
    }else{
        printf("  port: (default),\n");
    }
    printf("  pathname: /%s,\n  search: ?%s,\n  hash: #%s,\n}\n", l->pathname, l->search, l->hash);
    return 0;
}

Location * parse_url(char * url){
    
}
