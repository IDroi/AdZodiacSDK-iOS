# AdZodiac iOS SDK

Thanks for taking a look at AdZodiac! We take pride in having an easy-to-use, flexible monetization solution that works across multiple platforms.

Sign up for an account at [http://app.adzodiac.com/](http://app.adzodiac.com/).

## Need Help?

You can find integration documentation on our [wiki](https://github.com/adzodiac/adzodiac-ios-sdk/wiki/Getting-Started) and additional help documentation on our [developer help site](https://www.adzodiac.com/resources/docs).

To file an issue with our team, email [support@adzodiac.com](mailto:support@adzodiac.com).

**Please Note: We no longer accept GitHub Issues**

## New Pull Requests?

Thank you for submitting pull requests to the AdZodiac iOS GitHub repository. Our team regularly monitors and investigates all submissions for inclusion in our official SDK releases. Please note that AdZodiac does not directly merge these pull requests at this time. Please reach out to your account team or [support@adzodiac.com](mailto:support@adzodiac.com) if you have further questions.

## Disclosure
AdZodiac SDK 4.16 and above integrates technology from our partners Integral Ad Science, Inc. (“IAS”) and Moat, Inc. (“Moat”) in order to support viewability measurement and other proprietary reporting that [IAS](https://integralads.com/capabilities/viewability/) and [Moat](https://moat.com/analytics) provide to their advertiser and publisher clients. You have the option to remove or disable this technology by following the opt-out instructions [below](#disableViewability).  

If you do not remove or disable IAS's and/or Moat’s technology in accordance with these instructions, you agree that IAS's [privacy policy](https://integralads.com/privacy-policy/) and [license](https://integralads.com/sdk-license-agreement) and Moat’s [privacy policy](https://moat.com/privacy),  [terms](https://moat.com/terms), and [license](https://moat.com/sdklicense.txt), respectively, apply to your integration of these partners' technologies into your application.

## Download

The AdZodiac SDK is distributed as source code that you can include in your application.  AdZodiac provides two prepackaged archives of source code:

- **[AdZodiac Base SDK.zip](http://bit.ly/2bH8ObO)**

  Includes everything you need to serve HTML, MRAID, and Native AdZodiac advertisements.  Third party ad networks are not included.

- **[AdZodiac Base SDK Excluding Native.zip](http://bit.ly/2bCCgRw)**

  Includes everything you need to serve HTML and MRAID advertisements.  Third party ad networks and Native AdZodiac advertisements are not included.

The current version of the SDK is 4.19.0

## Integrate

Integration instructions are available on the [wiki](https://github.com/adzodiac/adzodiac-ios-sdk/wiki/Getting-Started).

More detailed class documentation is available in the repo under the `ClassDocumentation` folder.  This can be viewed [online too](http://htmlpreview.github.com/?https://github.com/adzodiac/adzodiac-ios-sdk/blob/master/ClassDocumentation/index.html).

## New in this Version

Please view the [changelog](https://github.com/adzodiac/adzodiac-ios-sdk/blob/master/CHANGELOG.md) for details.

- **Bug Fixes**
	- Ensure proper viewability initialization before ad content is loaded
	- Fire appropriate error delegate when rewarded video ad view is not ready to be shown
	- Resolve video playback sizing issue when creative AdZodiacForceOrientation is set to "Device"
	- Resolve WKWebView sizing and alignment issues on iPhoneX

- **Ad Network Mediation Updates**
	- Facebook Audience Network 4.26.1
	- Flurry 8.1.0
	- Millennial/AOL 6.6.0

See the [Getting Started Guide](https://github.com/adzodiac/adzodiac-ios-sdk/wiki/Getting-Started#app-transport-security-settings) for instructions on setting up ATS in your app.  

### <a name="disableViewability"></a>Disabling Viewability Measurement
There are a few options for opting out of viewability measurement: 
##### Opting Out in a Manual Integration
Before dragging the AdZodiacSDK folder into your Xcode project, simply delete the “Moat” folder to opt out of Moat or the “Avid” folder to opt out of IAS in AdZodiacSDK/Viewability/. If you would like to opt out of both, delete both folders.
##### Opting Out in a CocoaPods Integration
Including `pod 'adzodiac-ios-sdk'` in your Podfile will include both IAS and Moat SDKs, as well as the AdZodiac SDK. In order to opt out:
- `pod 'adzodiac-ios-sdk/Avid'` will include the IAS SDK, but not the Moat SDK, as well as the AdZodiac SDK.
- `pod 'adzodiac-ios-sdk/Moat'` will include the Moat SDK, but not the IAS SDK, as well as the AdZodiac SDK.
- `pod 'adzodiac-ios-sdk/Core'` will only include the AdZodiac SDK, with viewability measurement totally disabled.

Make sure to run `pod update` once your Podfile is set up to your preferences.
##### Software Disable
If you would like to opt out of viewability measurement but do not want to modify the AdZodiac SDK, a function is provided for your convenience. As soon as possible after calling `[[AdZodiac sharedInstance] start]`, call `[[AdZodiac sharedInstance] disableViewability:(vendors)]`. In place of “(vendors)”, `MPViewabilityOptionIAS` will disable IAS but leave Moat enabled, `MPViewabilityOptionMoat` will disable Moat but leave IAS enabled, and `MPViewabilityOptionAll` will disable all viewability measurement.

### IMPORTANT 4.0 UPGRADE INSTRUCTIONS

See our [upgrade document](https://github.com/adzodiac/adzodiac-ios-sdk/wiki/Upgrading-Native-Ads-Integration-to-4.0) for complete native ads integration migration instructions.


## Requirements

- iOS 8.0 and up
- Xcode 9.0 and up

## License

We have launched a new license as of version 3.2.0. To view the full license, visit [http://www.adzodiac.com/legal/sdk-license-agreement/](http://www.adzodiac.com/legal/sdk-license-agreement/)