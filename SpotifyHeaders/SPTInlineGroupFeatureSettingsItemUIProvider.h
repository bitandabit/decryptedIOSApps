//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureSettingsUIProvider.h"

@class NSArray, NSString;

@interface SPTInlineGroupFeatureSettingsItemUIProvider : NSObject <SPTFeatureSettingsUIProvider>
{
    NSArray *_items;
}

@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (double)featureSettingsPresentation:(id)arg1 heightOfRow:(unsigned long long)arg2;
- (void)featureSettingsPresentation:(id)arg1 didSelectRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsForFeatureSettingsItem:(id)arg1;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsForItemAtIndex:(unsigned long long)arg1;
- (void)getProvider:(id *)arg1 context:(id *)arg2 relativeRow:(unsigned long long *)arg3 forRow:(unsigned long long)arg4 parentContext:(id)arg5;
- (id)initWithGroupItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

