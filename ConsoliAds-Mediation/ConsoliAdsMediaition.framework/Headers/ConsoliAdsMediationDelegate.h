//
//  ConsoliAdsMediationDelegate.h
//  ConsoliAdsMediation
//
//  Created by FazalElahi on 26/10/2018.
//  Copyright © 2018 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CAMediationConstants.h"
#import "MediationInAppDetails.h"
#import "MediationInAppError.h"
//#import "CAInAppDetails.h"
//#import "CAInAppError.h"

@protocol ConsoliAdsMediationDelegate <NSObject>

@optional
- (void)onConsoliAdsInitializationSuccess:(BOOL)status;
- (void)onErrorGetFromEngine;
- (void)onSyncUserDeviceCompleted:(NSString *)response;

@end

@protocol ConsoliAdsMediationInterstitialAdDelegate <NSObject>

@optional

- (void)onInterstitialAdLoaded:(PlaceholderName)placeholderName;
- (void)onInterstitialAdFailToLoad:(PlaceholderName)placeholderName;
- (void)onInterstitialAdShown:(PlaceholderName)placeholderName;
- (void)onInterstitialAdClicked:(NSString *)featureId;
- (void)onInterstitialAdClosed:(PlaceholderName)placeholderName;
- (void)onInterstitialAdFailedToShow:(PlaceholderName)placeholderName;

@end

@protocol ConsoliAdsMediationRewardedAdDelegate <NSObject>

@optional
- (void)onRewardedVideoAdLoaded:(PlaceholderName)placeholderName;
- (void)onRewardedVideoAdFailToLoad:(PlaceholderName)placeholderName;
- (void)onRewardedVideoAdShown:(PlaceholderName)placeholderName;
- (void)onRewardedVideoAdCompleted:(PlaceholderName)placeholderName;
- (void)onRewardedVideoAdClicked:(NSString *)featureId;
- (void)onRewardedVideoAdFailToShow:(PlaceholderName)placeholderName;
- (void)onRewardedVideoAdClosed:(PlaceholderName)placeholderName;

@end

@protocol ConsoliAdsMediationInAppDelegate <NSObject>

@optional

- (void)onInAppPurchaseFailed:(MediationInAppError*)error;
- (void)onInAppPurchaseSuccess:(MediationInAppDetails*)product;
- (void)onInAppPurchaseRestored:(MediationInAppDetails*)product;

@end

@protocol ConsoliAdsMediationAppOpenAdDelegate <NSObject>

@optional

- (void)onAppOpenAdLoaded:(PlaceholderName)placeholderName;
- (void)onAppOpenAdFailToLoad:(PlaceholderName)placeholderName;
- (void)onAppOpenAdShown:(PlaceholderName)placeholderName;
- (void)onAppOpenAdClicked;
- (void)onAppOpenAdClosed:(PlaceholderName)placeholderName;
- (void)onAppOpenAdFailedToShow:(PlaceholderName)placeholderName;

@end
@protocol ConsoliAdsMediationRewardedInterstitialAdDelegate <NSObject>

@optional
- (void)onRewardedInterstitialAdLoaded:(PlaceholderName)placeholderName;
- (void)onRewardedInterstitialAdFailToLoad:(PlaceholderName)placeholderName;
- (void)onRewardedInterstitialAdShown:(PlaceholderName)placeholderName;
- (void)onRewardedInterstitialAdCompleted:(PlaceholderName)placeholderName;
- (void)onRewardedInterstitialAdFailToShow:(PlaceholderName)placeholderName;
- (void)onRewardedInterstitialAdClosed:(PlaceholderName)placeholderName;

@end
