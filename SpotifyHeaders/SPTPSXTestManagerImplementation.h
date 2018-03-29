//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPSXTestManager.h"

@class NSString, SPTPSXFeatureFlagSignalObserver;

@interface SPTPSXTestManagerImplementation : NSObject <SPTPSXTestManager>
{
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    SPTPSXFeatureFlagSignalObserver *_publicPSXUISignalObserver;
    SPTPSXFeatureFlagSignalObserver *_employeePSXUISignalObserver;
    SPTPSXFeatureFlagSignalObserver *_publicPSXFeedbackSignalObserver;
    SPTPSXFeatureFlagSignalObserver *_employeePSXFeedbackSignalObserver;
}

@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *employeePSXFeedbackSignalObserver; // @synthesize employeePSXFeedbackSignalObserver=_employeePSXFeedbackSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *publicPSXFeedbackSignalObserver; // @synthesize publicPSXFeedbackSignalObserver=_publicPSXFeedbackSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *employeePSXUISignalObserver; // @synthesize employeePSXUISignalObserver=_employeePSXUISignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *publicPSXUISignalObserver; // @synthesize publicPSXUISignalObserver=_publicPSXUISignalObserver;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFeedbackEnabled) _Bool feedbackEnabled;
@property(readonly, nonatomic, getter=isPersonalisedSetsUIEnabled) _Bool personalisedSetsUIEnabled;
- (void)setupPSXFeedbackFeatureFlags;
- (void)setupPSXUIFeatureFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 localSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
