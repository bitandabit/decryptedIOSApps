//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SCTAuth, SCTalkParticipant;

@protocol SCTIdentityServices <NSObject>
- (_Bool)isBestFriendConvoId:(NSString *)arg1;
- (void)refreshTalkAuthForConvoId:(NSString *)arg1 completion:(void (^)(void))arg2;
- (id <SCTAuth>)talkAuthForConvoId:(NSString *)arg1;
- (void)setPushTalkAuthForConvoId:(NSString *)arg1 mac:(NSString *)arg2 payload:(NSString *)arg3;
- (id <SCTalkParticipant>)localParticipantForConvoId:(NSString *)arg1;
- (NSArray *)remoteParticipantsForConvoId:(NSString *)arg1;
@end
