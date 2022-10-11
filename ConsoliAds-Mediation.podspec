#
# Be sure to run `pod lib lint ConsoliAds-Mediation.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ConsoliAds-Mediation'
  s.version          = '14.1.1'
  s.summary          = 'ConsoliAds-Mediation is used to mediate any adntework you want to integrate in your app in order to get Ad  servings.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  'ConsoliAds-Mediation is used to mediate any adntework you want to integrate in your app in order to get Ad servings.'
                       DESC

  s.homepage         = 'https://github.com/IntegrationConsoliAds/ConsoliAds-Mediation'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'IntegrationConsoliAds' => 'integration@consoliads.com' }
  s.source           = { :git => 'https://github.com/IntegrationConsoliAds/ConsoliAds-Mediation.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'

  s.vendored_frameworks = 'ConsoliAds-Mediation/ConsoliAdsMediaition.xcframework'
  s.xcconfig = {"OTHER_LDFLAGS" => "-ObjC"}
  s.static_framework = true
end
