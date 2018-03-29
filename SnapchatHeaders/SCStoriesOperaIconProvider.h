//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaImageProvider-Protocol.h"

@class NSMutableDictionary, SCBitmojiManager;

@interface SCStoriesOperaIconProvider : NSObject <SCOperaImageProvider>
{
    NSMutableDictionary *_friendForUsername;
    SCBitmojiManager *_bitmojiManager;
    long long _failedBitmojiLoadCount;
    long long _attemptedBitmojiLoadCount;
    long long _successfulBitmojiLoadCount;
}

- (void).cxx_destruct;
- (void)resetMetrics;
- (long long)getSuccessfulBitmojiLoadCount;
- (long long)getAttemptedBitmojiLoadCount;
- (long long)getFailedBitmojiLoadCount;
- (id)_randomGhostImageForUserKey:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_initializeFriendsDictIfNecessary;
- (id)initWithBitmojiManager:(id)arg1;

@end
