#
#  Be sure to run `pod spec lint commonLib.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "commonLib"
  s.version      = "0.0.1"
  s.summary      = "祁付民的commonLib."

  s.homepage     = "https://github.com/fulen/commonLib.git"

  s.license      = "MIT"

  s.author             = { "QiFn" => "Fu-Min.Qi@PERKINELMER.COM" }
  s.source       = { :git => "https://github.com/fulen/commonLib.git", :tag => "#{s.version}" }

  s.vendored_frameworks = "commonLib/*.framework"
  # s.source_files  = "commonLib", "commonLib/**/*.{h,m}"
  # s.source_files  = "commonLib/commonLib/*.h"
  # s.source_files  = "commonLib/**/*.h"
  # s.source_files  = "commonLib/*"


end
