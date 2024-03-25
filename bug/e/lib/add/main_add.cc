/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/who/main/LICENSE
*/

#include "proc_result.hh"
#include "proc_add.hh"

int main(int argc, char* argv[]) {
 string v1 = mark("-- ADD --", "blue");
 string v2 = mark("--help""\n", "blue");
 string v3 = mark("[PATTERN] ", "blue");
 string v4 = mark("[EXAMPLE] ", "blue");
 string v5 = mark("* ", "blue");
 string v6 = mark("[] ", "blue");
 // op(s)
 if (str(argv[1]) == "") {
  cout <<
  v1 + "\n"
  "adds a record with 3 variables (NAME/LINK/DOCX) into the address book.""\n"
  "whobook add " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "whobook add <name> <link> <docx> [--enforce]""\n"
  "adds NAME=<name> line to the record.""\n"
  "adds LINK=<link> line to the record. it could be a phone-number, an "
  "address, an email, etc.""\n"
  "adds DOCX=<docx> line to the record. it could be a 1-line comment, an "
  "absolute path to a photo-file, a profile-websiteetc.""\n"
  "excluding [--enforce], it will issue a warning if record(s) with similar "
  "values for variables (NAME/LINK/DOCX) are found.""\n"
  "including [--enforce] suppresses the warning.""\n" +
  v4 + "whobook add "
  "\"emeer adhamian (امیرادهمیان) Dr.\" "
  "\"+1 (555) 111 2233\" "
  "github.com/kode-trek""\n" +
  v5 + "multi-line descriptions can be provided as entries exclusively "
  "through the web-app interface.""\n" +
  v5 + "for one-line entries, we can use the CLI-app interface and later add "
  "extra lines via the following command:""\n" +
  v6 + "whobook edit <slot-id>""\n" +
  v4 + "whobook add \"umeed adhamian\" \"+1 (555) 666 7788\"""\n"
  "[WARNING] similar record(s) found.""\n"
  "[] whobook --sniff adhamian"
  << endl;
  exit(0);
 }
 proc_add(argv[1], argv[2], argv[3], argv[4]);
}
