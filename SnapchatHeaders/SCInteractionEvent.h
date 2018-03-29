//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface SCInteractionEvent : NSObject <NSCoding, NSCopying>
{
    NSString *_feedId;
    NSString *_category;
    NSDictionary *_eventInfo;
    NSDate *_interactionTimestamp;
    NSDate *_displayTimestamp;
    NSDate *_expiresAfterTimestamp;
    SCInteractionEvent *_replacementEvent;
    double _creationTimestampInSecs;
}

@property(readonly, nonatomic) double creationTimestampInSecs; // @synthesize creationTimestampInSecs=_creationTimestampInSecs;
@property(readonly, copy, nonatomic) SCInteractionEvent *replacementEvent; // @synthesize replacementEvent=_replacementEvent;
@property(readonly, copy, nonatomic) NSDate *expiresAfterTimestamp; // @synthesize expiresAfterTimestamp=_expiresAfterTimestamp;
@property(readonly, copy, nonatomic) NSDate *displayTimestamp; // @synthesize displayTimestamp=_displayTimestamp;
@property(readonly, copy, nonatomic) NSDate *interactionTimestamp; // @synthesize interactionTimestamp=_interactionTimestamp;
@property(readonly, copy, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (id)description;
- (long long)sourceType;
- (long long)type;
- (_Bool)isAddedToGroupEvent;
- (_Bool)isGroupNameChangedEvent;
- (_Bool)isSnapViewingOrViewed;
- (_Bool)isUnread;
- (_Bool)isScreenRecorded;
- (_Bool)isReplayed;
- (_Bool)isReceivedEvent;
- (_Bool)isSentUnreleased;
- (_Bool)isSentReleased;
- (_Bool)isReleased;
- (_Bool)isScreenshotted;
- (_Bool)isSentEvent;
- (_Bool)isForGroup;
- (id)callParticipants;
- (_Bool)isCallingEvent;
- (_Bool)isTalkEvent;
- (id)typingDisplayName;
- (_Bool)isTypingEvent;
- (_Bool)isAllowedWhenRankingIsOff;
- (_Bool)isVisibleEvent;
- (_Bool)shouldShowOnFeed;
- (_Bool)isMessagingEvent;
- (_Bool)isSendStateEvent;
- (_Bool)isSendingEvent;
- (_Bool)isFailedEvent;
- (_Bool)isServerEvent;
- (_Bool)isFriendEvent;
- (_Bool)isStoryEvent;
- (_Bool)isSnapEvent;
- (_Bool)isCashEvent;
- (_Bool)isChatEvent;
- (_Bool)isItemInfoEvent;
- (_Bool)isActionable;
- (_Bool)hasConsumableContent;
- (_Bool)isHighPriority;
- (_Bool)isUniqueEvent;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedId:(id)arg1 category:(id)arg2 eventInfo:(id)arg3 interactionTimestamp:(id)arg4 displayTimestamp:(id)arg5 expiresAfterTimestamp:(id)arg6 replacementEvent:(id)arg7;
- (id)initWithFeedId:(id)arg1 category:(id)arg2 eventInfo:(id)arg3 interactionTimestamp:(id)arg4 displayTimestamp:(id)arg5;
- (id)initWithFeedId:(id)arg1 category:(id)arg2 eventInfo:(id)arg3 displayTimestamp:(id)arg4;
- (id)initWithFeedId:(id)arg1 category:(id)arg2 eventInfo:(id)arg3 interactionTimestamp:(id)arg4;
- (id)currentReplacement;
- (_Bool)hasExpired;
- (double)timeUntilExpiration;
- (_Bool)isRecentlyAddedFriend;
- (id)contentInviteDescriptionWithLogIdentifier:(id)arg1;
- (_Bool)contentInviteSnapSending;
- (id)simpleDescriptionWithLogIdentifier:(id)arg1;
- (double)snapDuration;
- (id)snapViewingStartTime;
- (_Bool)isChatMediaMessage;
- (id)lastAcknowledgedSentReleasedMessageId;
- (_Bool)hasDeepLinkAddFriendInteraction;
- (long long)mediaType;
- (_Bool)hasAudio;
- (_Bool)isDummyMessage;
- (_Bool)isBroadcastSnap;
- (_Bool)isBirthdayMessage;
- (unsigned long long)unreadConsumableContentCount;
- (unsigned long long)unreadChatsCount;
- (unsigned long long)unopenSnapsCount;
- (id)unopenedSnapKeys;
- (_Bool)hasUnreadChats;
- (_Bool)hasUnopenSnaps;
- (_Bool)canShowDoubleTapToReply;
- (_Bool)canShowReplyButton;
- (_Bool)canShowSpinner;
- (_Bool)shouldShowReplayAnimation;
- (_Bool)canReplaySnap;
- (_Bool)isInfiniteSnap;
- (_Bool)isExpired;
- (_Bool)isInteractable;
- (_Bool)isReceivedViewingEvent;
- (_Bool)isReceivedLoadingEvent;
- (_Bool)isReceivedNotLoadedEvent;
- (id)mischiefUpdateModifiedParticipants;
- (id)messageState;
- (id)actionPerformer;
- (id)sender;
- (id)messageId;
- (_Bool)hasMessageId;
- (long long)mischiefUpdateType;
- (long long)sequenceNumber;
- (long long)messageType;
- (_Bool)messageStateShouldSuppressStorySubtext;
- (_Bool)hasActiveStories;
- (_Bool)hasUnviewedStories;
- (id)mostRecentUnviewedStoryTimestamp;

@end

