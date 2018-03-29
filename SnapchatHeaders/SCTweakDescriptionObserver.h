//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBTweakObserver-Protocol.h"

@class NSMapTable, NSString;

@interface SCTweakDescriptionObserver : NSObject <FBTweakObserver>
{
    NSMapTable *_tweakDescriptions;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)tweakDidChange:(id)arg1;
- (id)_descriptionForTweak:(id)arg1;
- (void)setDescriptions:(id)arg1 forTweak:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

