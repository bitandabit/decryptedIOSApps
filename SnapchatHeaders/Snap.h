//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EphemeralMedia.h"

#import "MediaDataSource-Protocol.h"
#import "MediaDelegate-Protocol.h"
#import "MediaImageProcessingDelegate-Protocol.h"
#import "MediaUploadDelegate-Protocol.h"
#import "NSCoding-Protocol.h"
#import "SCReplyChatMessage-Protocol.h"
#import "SnapVideoFilterDelegate-Protocol.h"

@class AVPlayerItem, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SCSnapVideoFilterState, SOJUSecurityFideliusFriendsKeysResponse;

@interface Snap : EphemeralMedia <SnapVideoFilterDelegate, MediaDataSource, MediaDelegate, MediaUploadDelegate, MediaImageProcessingDelegate, NSCoding, SCReplyChatMessage>
{
    _Bool _clearedBySender;
    _Bool _clearedByRecipient;
    _Bool _pending;
    _Bool _recentlyViewedAndHasNotLeftView;
    _Bool _replayed;
    _Bool _expiredWhileStackNotEmpty;
    _Bool _isInitialView;
    _Bool _hasBeenPaidToReplay;
    _Bool _isLastViewedSnapInStack;
    _Bool _isViewedFully;
    _Bool _hideBroadcastTimer;
    _Bool _broadcastSnap;
    _Bool _fideliusIsRetried;
    _Bool _markedAsFailedToView;
    _Bool _isRewrapInClear;
    _Bool _didFallback;
    _Bool _shouldRetryMediaSendTask;
    _Bool _disableAutoRetry;
    _Bool _isGroupSnap;
    double _closedAt;
    NSString *_display;
    NSString *_sender;
    NSString *_recipient;
    NSString *_correspondentId;
    NSArray *_recipients;
    NSArray *_invitedRecipients;
    long long _replayAnimationStateFeed;
    long long _replayAnimationStateChat;
    long long _screenshots;
    long long _screenRecordings;
    NSDate *_sentTimestamp;
    long long _status;
    long long _state;
    NSDate *_timestamp;
    NSDate *_snapStreakExpiryTime;
    NSNumber *_snapStreakCount;
    NSArray *_replyMedias;
    NSDate *_sendStartTimestamp;
    NSString *_key;
    NSString *_iv;
    long long _skipMediaPreloadReason;
    NSString *_encryptedSnapId;
    NSDate *_finishViewingTimestamp;
    long long _viewSource;
    AVPlayerItem *_playerItem;
    double _secondsViewed;
    double _timeStartedOnScreen;
    NSNumber *_time_left;
    NSString *_broadcastActionText;
    NSString *_broadcastSecondaryText;
    NSURL *_broadcastUrlToOpen;
    NSURL *_broadcastMediaUrl;
    NSString *_stackId;
    NSDictionary *_inviteSnapMetadata;
    long long _fideliusVersion;
    NSString *_senderOutBeta;
    NSString *_fideliusSnapKey;
    NSString *_fideliusSnapIv;
    NSString *_fideliusUnwrappedKey;
    NSDictionary *_fideliusInfo;
    long long _fideliusFailureCounter;
    long long _failedToPlayCount;
    long long _rewrapCount;
    double _rewrapStartTime;
    SOJUSecurityFideliusFriendsKeysResponse *_rewrapFriendKeys;
    NSString *_mediaSendTaskId;
    SCSnapVideoFilterState *_snapVideoFilterState;
    NSNumber *_savedSnapStateNumber;
    unsigned long long _numTimesReloaded;
    unsigned long long _numAutomaticRetries;
    unsigned long long _numTimesCanBeReplayed;
}

+ (id)targetSnapFromEphemeralMedia:(id)arg1;
+ (id)snapFromEphemeralMedia:(id)arg1;
+ (id)stringForSnapStatus:(long long)arg1;
+ (id)stringForSnapState:(long long)arg1;
+ (id)videoDirectory;
+ (_Bool)isStateViewing:(long long)arg1;
+ (_Bool)isStateReceivedAndOpened:(long long)arg1;
+ (_Bool)isStateSendingOrHasFailed:(long long)arg1;
+ (_Bool)shouldHandleLongPressOnSnap:(id)arg1;
+ (_Bool)shouldHandleTapOnSnap:(id)arg1;
+ (id)viewedIconImageForMediaType:(long long)arg1;
+ (id)replayedIconImageForMediaType:(long long)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(nonatomic) unsigned long long numTimesCanBeReplayed; // @synthesize numTimesCanBeReplayed=_numTimesCanBeReplayed;
@property(nonatomic) unsigned long long numAutomaticRetries; // @synthesize numAutomaticRetries=_numAutomaticRetries;
@property(nonatomic) unsigned long long numTimesReloaded; // @synthesize numTimesReloaded=_numTimesReloaded;
@property(copy, nonatomic) NSNumber *savedSnapStateNumber; // @synthesize savedSnapStateNumber=_savedSnapStateNumber;
@property(copy, nonatomic) SCSnapVideoFilterState *snapVideoFilterState; // @synthesize snapVideoFilterState=_snapVideoFilterState;
@property(nonatomic) _Bool isGroupSnap; // @synthesize isGroupSnap=_isGroupSnap;
@property(nonatomic) _Bool disableAutoRetry; // @synthesize disableAutoRetry=_disableAutoRetry;
@property(nonatomic) _Bool shouldRetryMediaSendTask; // @synthesize shouldRetryMediaSendTask=_shouldRetryMediaSendTask;
@property(copy, nonatomic) NSString *mediaSendTaskId; // @synthesize mediaSendTaskId=_mediaSendTaskId;
@property(nonatomic) _Bool didFallback; // @synthesize didFallback=_didFallback;
@property(nonatomic) _Bool isRewrapInClear; // @synthesize isRewrapInClear=_isRewrapInClear;
@property(retain, nonatomic) SOJUSecurityFideliusFriendsKeysResponse *rewrapFriendKeys; // @synthesize rewrapFriendKeys=_rewrapFriendKeys;
@property(nonatomic) double rewrapStartTime; // @synthesize rewrapStartTime=_rewrapStartTime;
@property(nonatomic) long long rewrapCount; // @synthesize rewrapCount=_rewrapCount;
@property(nonatomic) long long failedToPlayCount; // @synthesize failedToPlayCount=_failedToPlayCount;
@property(nonatomic) _Bool markedAsFailedToView; // @synthesize markedAsFailedToView=_markedAsFailedToView;
@property(nonatomic) long long fideliusFailureCounter; // @synthesize fideliusFailureCounter=_fideliusFailureCounter;
@property(nonatomic) _Bool fideliusIsRetried; // @synthesize fideliusIsRetried=_fideliusIsRetried;
@property(retain, nonatomic) NSDictionary *fideliusInfo; // @synthesize fideliusInfo=_fideliusInfo;
@property(retain, nonatomic) NSString *fideliusUnwrappedKey; // @synthesize fideliusUnwrappedKey=_fideliusUnwrappedKey;
@property(retain, nonatomic) NSString *fideliusSnapIv; // @synthesize fideliusSnapIv=_fideliusSnapIv;
@property(retain, nonatomic) NSString *fideliusSnapKey; // @synthesize fideliusSnapKey=_fideliusSnapKey;
@property(retain, nonatomic) NSString *senderOutBeta; // @synthesize senderOutBeta=_senderOutBeta;
@property(nonatomic) long long fideliusVersion; // @synthesize fideliusVersion=_fideliusVersion;
@property(retain, nonatomic) NSDictionary *inviteSnapMetadata; // @synthesize inviteSnapMetadata=_inviteSnapMetadata;
@property(copy, nonatomic) NSString *stackId; // @synthesize stackId=_stackId;
@property(retain, nonatomic) NSURL *broadcastMediaUrl; // @synthesize broadcastMediaUrl=_broadcastMediaUrl;
@property(retain, nonatomic) NSURL *broadcastUrlToOpen; // @synthesize broadcastUrlToOpen=_broadcastUrlToOpen;
@property(nonatomic) _Bool broadcastSnap; // @synthesize broadcastSnap=_broadcastSnap;
@property(nonatomic) _Bool hideBroadcastTimer; // @synthesize hideBroadcastTimer=_hideBroadcastTimer;
@property(retain, nonatomic) NSString *broadcastSecondaryText; // @synthesize broadcastSecondaryText=_broadcastSecondaryText;
@property(retain, nonatomic) NSString *broadcastActionText; // @synthesize broadcastActionText=_broadcastActionText;
@property(retain, nonatomic) NSNumber *time_left; // @synthesize time_left=_time_left;
@property(nonatomic) double timeStartedOnScreen; // @synthesize timeStartedOnScreen=_timeStartedOnScreen;
@property(nonatomic) double secondsViewed; // @synthesize secondsViewed=_secondsViewed;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool isViewedFully; // @synthesize isViewedFully=_isViewedFully;
@property(nonatomic) _Bool isLastViewedSnapInStack; // @synthesize isLastViewedSnapInStack=_isLastViewedSnapInStack;
@property(nonatomic) _Bool hasBeenPaidToReplay; // @synthesize hasBeenPaidToReplay=_hasBeenPaidToReplay;
@property(nonatomic) _Bool isInitialView; // @synthesize isInitialView=_isInitialView;
@property(nonatomic) long long viewSource; // @synthesize viewSource=_viewSource;
@property(retain, nonatomic) NSDate *finishViewingTimestamp; // @synthesize finishViewingTimestamp=_finishViewingTimestamp;
@property(copy, nonatomic) NSString *encryptedSnapId; // @synthesize encryptedSnapId=_encryptedSnapId;
@property(nonatomic) long long skipMediaPreloadReason; // @synthesize skipMediaPreloadReason=_skipMediaPreloadReason;
@property(retain, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSDate *sendStartTimestamp; // @synthesize sendStartTimestamp=_sendStartTimestamp;
@property(retain, nonatomic) NSArray *replyMedias; // @synthesize replyMedias=_replyMedias;
@property(retain, nonatomic) NSNumber *snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property(retain, nonatomic) NSDate *snapStreakExpiryTime; // @synthesize snapStreakExpiryTime=_snapStreakExpiryTime;
@property(nonatomic) _Bool expiredWhileStackNotEmpty; // @synthesize expiredWhileStackNotEmpty=_expiredWhileStackNotEmpty;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSDate *sentTimestamp; // @synthesize sentTimestamp=_sentTimestamp;
@property(nonatomic) long long screenRecordings; // @synthesize screenRecordings=_screenRecordings;
@property(nonatomic) long long screenshots; // @synthesize screenshots=_screenshots;
@property(nonatomic) _Bool replayed; // @synthesize replayed=_replayed;
@property(nonatomic) long long replayAnimationStateChat; // @synthesize replayAnimationStateChat=_replayAnimationStateChat;
@property(nonatomic) long long replayAnimationStateFeed; // @synthesize replayAnimationStateFeed=_replayAnimationStateFeed;
@property(copy, nonatomic) NSArray *invitedRecipients; // @synthesize invitedRecipients=_invitedRecipients;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSString *correspondentId; // @synthesize correspondentId=_correspondentId;
@property(retain, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property(nonatomic) _Bool recentlyViewedAndHasNotLeftView; // @synthesize recentlyViewedAndHasNotLeftView=_recentlyViewedAndHasNotLeftView;
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSString *display; // @synthesize display=_display;
@property(nonatomic) double closedAt; // @synthesize closedAt=_closedAt;
@property(nonatomic) _Bool clearedByRecipient; // @synthesize clearedByRecipient=_clearedByRecipient;
@property(nonatomic) _Bool clearedBySender; // @synthesize clearedBySender=_clearedBySender;
- (void).cxx_destruct;
- (void)_removePersistedFailedSnapData;
- (id)teamSnapId;
- (id)numericId;
- (id)cleanId;
- (_Bool)markAsViewedAfterFailuresIfNecessary;
- (void)finishViewingFromOperaIfPossibleWithCellViewPosition:(long long)arg1;
- (void)startViewingFromOperaFromSource:(long long)arg1;
- (long long)messageType;
- (_Bool)isInviteSnapSent;
- (_Bool)containsInvitedRecipients;
- (_Bool)canDelete;
- (id)clearedDictionary;
- (_Bool)sending;
- (_Bool)failedToSend;
- (_Bool)sentByUser;
- (_Bool)isInvalidAfterUnarchiving;
- (_Bool)isForwardable;
- (_Bool)isUnread;
- (_Bool)shouldDisplayBelowFoldInChat;
- (id)sendJSON;
- (_Bool)isReleasedBy:(id)arg1;
- (_Bool)isReleased;
- (_Bool)isSavedBy:(id)arg1;
- (_Bool)isSaved;
- (id)conversationId;
- (id)messageRecipient;
- (id)messageSender;
- (id)iterToken;
- (id)sequenceNumber;
- (id)feedSortTimestamp;
- (id)feedDisplayTimestamp;
- (id)messageTimestampForOrdering;
- (id)messageTimestamp;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (void)postFailToSendNotification;
- (_Bool)shouldPostFailToSendNotification;
- (void)verifyMedia:(id)arg1;
- (id)encryptedMediaDataToUpload:(id)arg1;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)fetchMediaIsGoneForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1;
- (void)fetchMediaIsLoadingForMedia:(id)arg1;
- (_Bool)isBroadcastForMedia:(id)arg1;
- (unsigned long long)trackingExpirationInDaysForMedia:(id)arg1;
- (id)trackingMediaTypeForMedia:(id)arg1;
- (id)trackingTypeForMedia:(id)arg1;
- (id)trackingIdForMedia:(id)arg1;
- (id)requestContexts;
- (long long)requestFallbackPriority;
- (long long)requestPriorityUserInitiated:(_Bool)arg1;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (void)_uploadCleartextKey;
- (_Bool)shouldEndToEndEncrypt;
- (_Bool)shouldClientDecrypt;
- (id)mediaIdForMedia:(id)arg1;
- (id)endpointParamsForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (id)keyForMedia:(id)arg1;
- (id)failedMediaDatastore;
- (void)loadPersistedFailedSnapData;
- (id)uploadSuccessUserDefaultsKey;
@property(readonly, copy) NSString *description;
- (id)secretReceivedSnapParameters;
- (id)receivedSnapParameters:(long long)arg1;
- (id)receivedSnapParameters;
- (id)secretSentSnapParameters;
- (id)_sentSnapParametersWithResponse:(id)arg1;
- (void)logSendEvent;
- (id)consistentId;
- (_Bool)veryRecentlyOpen;
- (id)username;
- (_Bool)isExpired;
- (_Bool)canBeRemoved;
- (_Bool)isGroupSend;
- (id)nameForView;
- (id)allRecipientDisplayNames;
- (id)_invitedRecipientsInfo;
- (id)_allRecipientUsernames;
- (id)_allRecipients;
- (id)recipientUsernames;
- (id)delimitedRecipientUsernamesWithDelimiter:(id)arg1;
- (_Bool)isSnapOpened;
- (void)didDecodeObject;
- (void)_snapDidDecodeObject;
- (void)willEncodeObject;
- (void)_snapWillEncodeObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)replaceWithSnap:(id)arg1;
- (void)setCanBeReplayed:(_Bool)arg1;
- (void)didReplay;
- (_Bool)hasFreeReplay;
- (_Bool)isUsingFreeReplay;
- (_Bool)canBeReplayed;
- (_Bool)isDoublePost;
- (_Bool)shouldReplaceWithSnap:(id)arg1;
- (_Bool)updateWithSnap:(id)arg1;
- (_Bool)isBroadcastAndFromGCS;
- (_Bool)isPreparedToReplayOrReplaying;
- (_Bool)isSentSnap;
- (_Bool)isReceivedAndUnopened;
- (_Bool)isReceivedAndOpened;
- (_Bool)isViewingOrUnviewed;
- (_Bool)isReplaying;
- (_Bool)isViewing;
- (_Bool)isLoading;
- (_Bool)isLoaded;
- (_Bool)isNotLoaded;
- (_Bool)isScreenRecorded;
- (_Bool)isScreenshotted;
- (_Bool)isSentAndOpened;
- (_Bool)isDelivered;
- (_Bool)isSentDeliveredOrOpened;
- (_Bool)isSent;
- (_Bool)isSendingOrHasFailed;
- (_Bool)isUploadingOrFailedToUpload;
- (_Bool)isMediaProcessingOrFailedToProcess;
- (_Bool)isMediaProcessing;
- (_Bool)hasMediaProcessingFailed;
- (_Bool)hasFailed;
- (_Bool)isSending;
- (void)_addReplyMediasToJSONDictionary:(id)arg1;
- (id)uploadParametersWithData:(_Bool)arg1 data:(id)arg2;
- (id)_snapType;
- (void)_retrySendSnapsWithUploadData:(id)arg1;
- (void)_retrySendingSnap;
- (void)_retrySendingSnapBypassingRetryEndpoint;
- (void)_sendSnap;
- (void)uploadSnap;
- (void)setUploading;
- (CDUnknownBlockType)uploadFailureBlock;
- (void)snapSentWithInviteSnapMetaData:(id)arg1;
- (CDUnknownBlockType)uploadSuccessBlock;
- (void)retrySending:(_Bool)arg1;
- (_Bool)autoRetrySendingIfNetworkReachable;
- (void)doSend;
- (void)postSend;
- (void)sendWithPreSend:(_Bool)arg1 postSend:(_Bool)arg2;
- (void)preSend;
- (void)uploadAndSend;
- (void)markAsFailedToSendAndExpired;
- (_Bool)shouldClearSentSnap;
- (void)incNumTimesReloaded;
- (_Bool)isSentButNotYetReturned;
- (void)clearNumTimesReloaded;
- (void)markAsViewed;
- (void)replay;
- (void)initFields;
- (id)updatedSnapDictionary;
- (void)_initializeLensMetadata;
- (void)_initializeReplyMediasFromJSONDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 source:(id)arg2;
- (id)initwithReceivedMessageSCCPJSONDictionary:(id)arg1;
- (id)initWithClientId;
- (void)updateStateFromEphemeralMedia:(id)arg1;
- (void)updateWithStateMessage:(id)arg1;
- (id)stateMessageWithParametersDelegate:(id)arg1;
- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (void)clearFromChat;
- (_Bool)shouldDisplayInChat;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

