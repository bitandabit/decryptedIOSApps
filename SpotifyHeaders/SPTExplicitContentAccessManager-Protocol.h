//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol SPTExplicitContentAccessManager <NSObject>
- (void)contentPlaybackPrevented:(NSURL *)arg1 contextURI:(NSURL *)arg2;
- (void)contentPlaybackPrevented:(NSURL *)arg1;
- (_Bool)isPlaybackRestrictedForContentURL:(NSURL *)arg1 flag:(_Bool)arg2;
- (void)removeEnabledStateObserver:(id <SPTExplicitContentEnabledStateObserver>)arg1;
- (void)addEnabledStateObserver:(id <SPTExplicitContentEnabledStateObserver>)arg1;
@end

