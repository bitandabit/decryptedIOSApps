//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTHomeTestManagerProtocol.h"

@class NSString;

@interface SPTHomeTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTHomeTestManagerProtocol>
{
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaService> _abbaService;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTAlertController> _alertController;
    id <SPTLegacyFeatureFlag> _freshnessFeatureFlag;
    id <SPTLegacyFeatureFlag> _tasteMatchExistingUsersFeatureFlag;
    id <SPTLegacyFeatureFlag> _tasteMatchNewUsersFeatureFlag;
    id <SPTFeatureFlagSignal> _badgeFlagSignal;
    long long _badgeFlagState;
    id <SPTFeatureFlagSignal> _hubsRendererFlagSignal;
    long long _hubsRendererFlagState;
}

@property(nonatomic) long long hubsRendererFlagState; // @synthesize hubsRendererFlagState=_hubsRendererFlagState;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> hubsRendererFlagSignal; // @synthesize hubsRendererFlagSignal=_hubsRendererFlagSignal;
@property(nonatomic) long long badgeFlagState; // @synthesize badgeFlagState=_badgeFlagState;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> badgeFlagSignal; // @synthesize badgeFlagSignal=_badgeFlagSignal;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> tasteMatchNewUsersFeatureFlag; // @synthesize tasteMatchNewUsersFeatureFlag=_tasteMatchNewUsersFeatureFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> tasteMatchExistingUsersFeatureFlag; // @synthesize tasteMatchExistingUsersFeatureFlag=_tasteMatchExistingUsersFeatureFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> freshnessFeatureFlag; // @synthesize freshnessFeatureFlag=_freshnessFeatureFlag;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
@property(readonly, nonatomic, getter=isBadgeTestEnabled) _Bool badgeTestEnabled;
@property(readonly, nonatomic) _Bool isTasteMatchEnabled;
- (void)addFresshnessCategoryMethods;
@property(readonly, nonatomic) _Bool isFreshnessTestEnabled;
@property(readonly, nonatomic) _Bool isFeatureEnabled;
@property(readonly, nonatomic) _Bool hubsRendererEnabled;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 localSettings:(id)arg2 abbaService:(id)arg3 featureFlagFactory:(id)arg4 featureSettingsItemFactory:(id)arg5 alertController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
