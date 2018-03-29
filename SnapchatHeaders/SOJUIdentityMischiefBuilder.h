//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SOJUIdentityMischiefMetadata, SOJULastMischiefChatAction, SOJULastMischiefContent, SOJUVideoChatParams;

@interface SOJUIdentityMischiefBuilder : NSObject
{
    NSString *_mischiefId;
    SOJUIdentityMischiefMetadata *_mischiefMetadata;
    NSString *_mischiefName;
    NSArray *_participants;
    NSArray *_exParticipants;
    NSNumber *_createMischiefTimestamp;
    NSNumber *_lastInteractionTimestamp;
    NSNumber *_lastClearedTimestamp;
    NSDictionary *_latestSequenceNumbers;
    SOJULastMischiefChatAction *_lastMischiefChatAction;
    NSArray *_stickerFavorites;
    NSString *_iterToken;
    NSString *_contentType;
    NSArray *_content;
    NSArray *_contentOrder;
    NSArray *_chatMessages;
    NSArray *_releaseMessages;
    NSArray *_updateMessages;
    NSNumber *_notificationStatus;
    SOJUVideoChatParams *_videoChatParams;
    NSNumber *_earlierContentExists;
    NSDictionary *_earliestSequenceNumbers;
    NSArray *_messageStateMessages;
    NSArray *_snapStateMessages;
    NSNumber *_laterContentExists;
    SOJULastMischiefContent *_lastMischiefContent;
    NSDictionary *_blockedParticipantExceptions;
    NSDictionary *_pageLatestSequenceNumbers;
    NSDictionary *_participantLastContent;
    NSString *_mischiefMobId;
    NSNumber *_isStoryMuted;
    NSString *_creatorId;
    NSString *_mischiefCreationSource;
    NSDictionary *_seenChatSequenceNumbers;
    NSArray *_messageEraseMessages;
}

+ (id)withJUIdentityMischief:(id)arg1;
- (void).cxx_destruct;
- (id)setMessageEraseMessages:(id)arg1;
- (id)setSeenChatSequenceNumbers:(id)arg1;
- (id)setMischiefCreationSource:(id)arg1;
- (id)setCreatorId:(id)arg1;
- (id)setIsStoryMuted:(id)arg1;
- (id)setMischiefMobId:(id)arg1;
- (id)setParticipantLastContent:(id)arg1;
- (id)setPageLatestSequenceNumbers:(id)arg1;
- (id)setBlockedParticipantExceptions:(id)arg1;
- (id)setLastMischiefContent:(id)arg1;
- (id)setLaterContentExists:(id)arg1;
- (id)setSnapStateMessages:(id)arg1;
- (id)setMessageStateMessages:(id)arg1;
- (id)setEarliestSequenceNumbers:(id)arg1;
- (id)setEarlierContentExists:(id)arg1;
- (id)setVideoChatParams:(id)arg1;
- (id)setNotificationStatus:(id)arg1;
- (id)setUpdateMessages:(id)arg1;
- (id)setReleaseMessages:(id)arg1;
- (id)setChatMessages:(id)arg1;
- (id)setContentOrder:(id)arg1;
- (id)setContent:(id)arg1;
- (id)setContentType:(id)arg1;
- (id)setIterToken:(id)arg1;
- (id)setStickerFavorites:(id)arg1;
- (id)setLastMischiefChatAction:(id)arg1;
- (id)setLatestSequenceNumbers:(id)arg1;
- (id)setLastClearedTimestamp:(id)arg1;
- (id)setLastInteractionTimestamp:(id)arg1;
- (id)setCreateMischiefTimestamp:(id)arg1;
- (id)setExParticipants:(id)arg1;
- (id)setParticipants:(id)arg1;
- (id)setMischiefName:(id)arg1;
- (id)setMischiefMetadata:(id)arg1;
- (id)setMischiefId:(id)arg1;
- (id)build;
- (id)setMischiefCreationSourceEnum:(long long)arg1;
- (id)setIsStoryMutedValue:(_Bool)arg1;
- (id)setLaterContentExistsValue:(_Bool)arg1;
- (id)setEarlierContentExistsValue:(_Bool)arg1;
- (id)setNotificationStatusValue:(_Bool)arg1;
- (id)setContentTypeEnum:(long long)arg1;
- (id)setLastClearedTimestampValue:(long long)arg1;
- (id)setLastInteractionTimestampValue:(long long)arg1;
- (id)setCreateMischiefTimestampValue:(long long)arg1;

@end

