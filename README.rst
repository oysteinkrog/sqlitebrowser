=============
sqlitebrowser
=============

This is a fork from the SF project which seems to be stagnant. 

Old Project
-----------
- http://sqlitebrowser.sourceforge.net
- https://sourceforge.net/projects/sqlitebrowser/

What it is
----------

(taken from the website linked to above; it's still true - now even more)

SQLite Database Browser is a freeware, public domain, open source visual tool
used to create, design and edit database files compatible with SQLite. It is
meant to be used for users and developers that want to create databases, edit
and search data using a familiar spreadsheet-like interface, without the need
to learn complicated SQL commands.

What's been done since then
---------------------------
- Qt3Support was removed
- Recent files menu added
- Improved UI, making it more modern, replacing some dialogs etc.
- Syntax highlighting for SQL code
- Cleaned up the code, reducing the SLOC quite a bit
- Added basic support for triggers and views
- Added pragma editing
- Added BLOB support
- Added a new filter row for searching
- Improved performance when opening large tables
- Extended the SQL tab
- Added SQLite extension support
- Fixed a ton of bugs
- Probably more

All in all a fair amount of the code has been rewritten in order to regain
maintainability. Based on this quite a few bugs could be fixed and some
features added.

What's still to do
------------------

- Even more code cleanup
- Further improvement of the UI, adding more features and making it easier to
  use
- Feel free to add more issues at
  https://github.com/rp-/sqlitebrowser/issues

Windows binaries
----------------
Windows binaries can be downloaded from here:

http://rp.oldsch00l.com/sqlitebrowser/
