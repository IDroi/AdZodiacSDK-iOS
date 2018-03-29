#
# Be sure to run `pod lib lint podTestLibrary.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AdZodiacSDK'
  s.version          = '0.1.0'
  s.summary          = 'This CoreSDK is one part of AdZodiac for iOS'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

#  s.description      = <<-DESC
#TODO: Add long description of the pod here.
#                       DESC

  s.homepage         = 'https://github.com/IDroi/AdZodiacSDK-iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'peter.shih' => 'peter.shih@droi.com' }
  s.source           = { :git => 'https://github.com/IDroi/AdZodiacSDK-iOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  #s.source_files = 'AdZodiacSDK.framework'
  
  #s.resource_bundles = {
  #  'AdZodiacSDK' => ['AdZodiacSDK.framework']
  #}

  s.vendored_frameworks = "AdZodiacSDK.framework"

  #s.public_header_files = 'AdZodiacSDK/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  s.dependency 'DroiCoreSDK'
  s.dependency 'AdColony'
  s.dependency 'ChartboostSDK'
  s.dependency 'FBAudienceNetwork'
  s.dependency 'Google-Mobile-Ads-SDK'
  s.dependency 'MMAdSDK'
  s.dependency 'TapjoySDK'
  s.dependency 'UnityAds'
  s.dependency 'VungleSDK-iOS'
  s.dependency 'Flurry-iOS-SDK/FlurrySDK'
  s.dependency 'Flurry-iOS-SDK/FlurryAds'
end
