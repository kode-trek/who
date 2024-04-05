/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/who/main/LICENSE
*/

int main() {
 string v1 = mark("-- WHO address BOOK --", "blue");
 string v2 = mark("[PATTERN] ", "blue");
 string v3 = mark("Linux Mint 21.2 (victoria)", "yellow");
 string v4 = mark("[DEVELOPMENT] ", "yellow");
 // op(s)
 cout <<
 v1 + "\n" +
 "performs operation(s) (search/add/remove/edit/view) on record(s) within an "
 "address book.""\n""\n" +
 v2 + "whobook cmd""\n"
 "presents list of command(s).""\n" +
 v2 + "whobook <cmd> --help""\n"
 "brings up the manual for the <cmd>-command.""\n""\n"
 "this terminal-app had a test-drive on " + v3 + " platform.""\n" +
 v4 + "github.com/kode-trek/who"
 << endl;
}
