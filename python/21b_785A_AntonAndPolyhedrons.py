def main():
    faces = 0
    hmap = {"Tetrahedron" : 4,
            "Cube" : 6,
            "Octahedron" : 8,
            "Dodecahedron" : 12,
            "Icosahedron" : 20}
    n = int(input())
    for _ in range(n):
        faces += hmap[input().strip()]
    print(faces)

if __name__ == "__main__":
    main()