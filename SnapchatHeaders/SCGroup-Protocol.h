//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, SOJUVideoChatParams;

@protocol SCGroup <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *participantLastContent;
@property(readonly, nonatomic) _Bool isStoryMuted;
@property(readonly, nonatomic) _Bool temporary;
@property(readonly, copy, nonatomic) NSDictionary *blockedParticipantExceptions;
@property(readonly, copy, nonatomic) NSString *token;
@property(readonly, copy, nonatomic) NSString *mischiefCreationSource;
@property(readonly, nonatomic) _Bool isLocal;
@property(readonly, copy, nonatomic) NSDate *createMischiefTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastInteractionTimestamp;
@property(readonly, copy, nonatomic) SOJUVideoChatParams *videoChatParams;
@property(readonly, nonatomic) _Bool notificationStatus;
@property(readonly, copy, nonatomic) NSArray *exParticipants;
@property(readonly, copy, nonatomic) NSArray *orderedParticipants;
@property(readonly, copy, nonatomic) NSString *mischiefMobId;
@property(readonly, copy, nonatomic) NSString *creatorId;
@property(readonly, copy, nonatomic) NSString *groupName;
@property(readonly, nonatomic) unsigned long long version;
@property(readonly, copy, nonatomic) NSString *groupId;
@end

