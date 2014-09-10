api = 2
core = 7.x

projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][branch] = "7.x-2.x"
projects[wysiwyg][download][revision] = "f6f378e5b45280935fb087e27ea9dcad08b3956b"
projects[wysiwyg][patch][1489096] = http://drupal.org/files/wysiwyg-table-format.patch
projects[wysiwyg][patch][1786732] = http://drupal.org/files/wysiwyg-arbitrary_image_paths_markitup-1786732-3.patch

libraries[ckeditor][version] = "4.4.3"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.1/ckeditor_4.4.3_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"
