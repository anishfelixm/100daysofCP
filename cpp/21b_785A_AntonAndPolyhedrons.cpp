#include<bits/stdc++.h>

int main(){
    int n, faces = 0;
    std::string temp;
    std::unordered_map<std::string, int> hmap;
    hmap["Tetrahedron"] = 4;
    hmap["Cube"] = 6;
    hmap["Octahedron"] = 8;
    hmap["Dodecahedron"] = 12;
    hmap["Icosahedron"] = 20;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        faces += hmap[temp];
    }
    std::cout<<faces;
    return 0;
}