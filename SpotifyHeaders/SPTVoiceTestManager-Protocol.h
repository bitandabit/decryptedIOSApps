//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTVoiceTestManager <NSObject>
- (void)removeObserver:(id <SPTVoiceTestManagerObserver>)arg1;
- (void)addObserver:(id <SPTVoiceTestManagerObserver>)arg1;
- (_Bool)isVoiceNPVEnabled;
- (_Bool)isVoiceSearchEnabled;
- (_Bool)isVoiceServiceEnabled;
@end

