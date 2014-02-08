#
# Crash Manager target
#
target "CrashManager" do
	pod 'MagicalRecord'
	pod 'AFNetworking'
	pod 'ReactiveCocoa'
	pod 'ProtobufObjC'
	pod 'GroundControl'
	pod 'SHUIKitBlocks'
	pod 'TTTLocalizedPluralString'
	pod 'CocoaLumberjack'
    pod 'Appsee'
    pod 'SSKeychain'
    pod 'PBWebViewController'
    
	inhibit_all_warnings!
end

post_install do | installer |
	require 'fileutils'
	FileUtils.cp_r("Pods/Pods-CrashManager-acknowledgements.plist", "Crashlytics/Settings.bundle/Acknowledgements.plist", :remove_destination => true)
end