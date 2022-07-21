/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/who/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/

int main(int argc, char* argv[]) {
	md(argv[3]);
	mv(argv[2], argv[3]);
	mv("stk.dat", argv[3]);
}
