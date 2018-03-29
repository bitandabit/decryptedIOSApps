//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTalkParticipant-Protocol.h"

@class NSNumber, NSString, UIColor;

@interface SCTIdentityUserAdapter : NSObject <SCTalkParticipant>
{
    NSString *_username;
    NSString *_displayName;
    UIColor *_presenceColor;
    NSNumber *_sessionUserId;
    NSString *_bitmojiAvatarId;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)bitmojiAvatarId;
- (id)sessionUserId;
- (id)presenceColor;
- (id)displayName;
- (id)username;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 color:(id)arg3 sessionUserId:(id)arg4 bitmojiAvatarId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
