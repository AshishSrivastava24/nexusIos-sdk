Pod::Spec.new do |s|
  s.name             = "NexusConnectSDK"
  s.version          = "1.01"
  s.summary          = "NexusConnect iOS Static Library."
  s.homepage         = "http://corp.support.com/"
  s.license          = { :type => 'Commercial', :text => 'See http://developers.nexus.com/ios/terms' }
  s.author           = { "Nexus" => "support@nexus.com" }
  s.social_media_url = 'https://twitter.com/nexus'

  s.platform     = :ios, '7.0'
  s.requires_arc = true
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC -lC++' }

  s.source           = { :git => "https://github.com/AshishSrivastava24/nexusIos-sdk.git", :tag => "1.01" }

  s.frameworks = 'CFNetwork', 'Foundation', 'SystemConfiguration', 'UIKit' , 'CoreTelephony' , 'QuartzCore' , 'CoreMedia' , 'AVFoundation'  , 'ImageIO'
  s.libraries = 'z'
  
  s.preserve_paths      = "NexusConnectSDK.framework"
  s.public_header_files = "NexusConnectSDK.framework/**/*.h"
  s.vendored_frameworks = "NexusConnectSDK.framework"
  s.ios.resource_bundle = { 'NexusConnectResources' => 'NexusConnectResources.bundle' }
end
