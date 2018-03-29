//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaMessage.h"

#import "ArchivedMediaMessage-Protocol.h"
#import "MediaUploadDelegate-Protocol.h"

@class Media, NSArray, NSDictionary, NSMutableDictionary, NSString, SCDiscoverMediaBlobMetadata, UIColor;

@interface SCDiscoverMediaMessage : SCBaseMediaMessage <MediaUploadDelegate, ArchivedMediaMessage>
{
    SCDiscoverMediaBlobMetadata *_discoverMetadata;
    _Bool _isZipped;
    _Bool _failedToDecode;
    NSString *_clientId;
    NSArray *_recipients;
    Media *_contentMedia;
    Media *_overlayMedia;
    Media *_thumbnailMedia;
    NSDictionary *_sendLoggingParameters;
    NSArray *_recipientsNeedingRetry;
    NSMutableDictionary *_sequenceNumbers;
    unsigned long long _numberOfFailedRetryAttempts;
}

+ (id)copyOfDiscoverMessageWithUsernames:(id)arg1 usernames:(id)arg2;
+ (id)uniqueNameFromPublisherName:(id)arg1;
@property(nonatomic) _Bool failedToDecode; // @synthesize failedToDecode=_failedToDecode;
@property(nonatomic) unsigned long long numberOfFailedRetryAttempts; // @synthesize numberOfFailedRetryAttempts=_numberOfFailedRetryAttempts;
@property(retain, nonatomic) NSMutableDictionary *sequenceNumbers; // @synthesize sequenceNumbers=_sequenceNumbers;
@property(retain, nonatomic) NSArray *recipientsNeedingRetry; // @synthesize recipientsNeedingRetry=_recipientsNeedingRetry;
@property(retain, nonatomic) NSDictionary *sendLoggingParameters; // @synthesize sendLoggingParameters=_sendLoggingParameters;
@property(readonly, nonatomic) SCDiscoverMediaBlobMetadata *discoverMetadata; // @synthesize discoverMetadata=_discoverMetadata;
@property(retain, nonatomic) Media *thumbnailMedia; // @synthesize thumbnailMedia=_thumbnailMedia;
@property(retain, nonatomic) Media *overlayMedia; // @synthesize overlayMedia=_overlayMedia;
@property(retain, nonatomic) Media *contentMedia; // @synthesize contentMedia=_contentMedia;
@property(nonatomic) _Bool isZipped; // @synthesize isZipped=_isZipped;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (void)removeMediaFromCache;
- (void)imageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveDiscoverBlobWithDataDictionary:(id)arg1 withMetadataDictionary:(id)arg2 isSuccess:(_Bool)arg3 unarchivingFailed:(_Bool)arg4 withDiscoverBlob:(id)arg5 withHandler:(CDUnknownBlockType)arg6;
- (void)unarchiveMediaData:(CDUnknownBlockType)arg1;
- (_Bool)saveMediaToDisk:(id)arg1;
- (void)_imageFromCacheAfterUnarchivingMediaWithCompletion:(CDUnknownBlockType)arg1;
- (void)imageFromCache:(CDUnknownBlockType)arg1;
- (id)trackingMediaTypeForMedia:(id)arg1;
- (_Bool)isSending;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (id)encryptedMediaDataToUpload:(id)arg1;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (id)indexKeyInChat;
- (CDUnknownBlockType)sendFailureBlock;
- (id)failedToSendToRecipientUsernames:(id)arg1 didFailedToSendToNonFriend:(_Bool)arg2;
- (CDUnknownBlockType)sendSuccessBlock;
- (id)_httpParameters;
- (id)pendingOrFailedRecipientUsernames;
- (id)recipientUsernames;
- (id)stringForUsernames:(id)arg1 splitter:(id)arg2;
- (id)pendingOrFailedRecipientString;
- (id)recipientString;
- (id)generateSequenceNubmers;
- (id)sendJSON;
- (void)send;
- (void)upload;
- (id)videoURL;
- (id)videoFilename;
- (id)imageMedia;
- (_Bool)videoExistsOnDisk;
- (_Bool)readyForLinkToDiscover;
- (_Bool)isMediaUnarchived;
- (void)fillConversationId;
@property(readonly, copy, nonatomic) NSString *remoteUrl;
@property(readonly, nonatomic) struct CGRect viewport;
@property(readonly, copy, nonatomic) NSString *publisherUniqueName;
@property(readonly, copy, nonatomic) NSString *publisherDisplayName;
@property(readonly, copy, nonatomic) NSString *publisherName;
- (id)secondaryColor;
@property(readonly, nonatomic) UIColor *primaryColor;
@property(readonly, nonatomic) _Bool linkToLongform;
@property(readonly, copy, nonatomic) NSString *filterVisual;
@property(readonly, copy, nonatomic) NSString *filterInfo;
@property(readonly, copy, nonatomic) NSString *editionId;
@property(readonly, copy, nonatomic) NSString *dSnapId;
@property(readonly, nonatomic) long long drawing;
@property(readonly, nonatomic) long long caption;
@property(readonly, nonatomic) long long blobMediaType;
@property(readonly, copy, nonatomic) NSString *adSnapId;
- (_Bool)isAd;
- (_Bool)shouldHideDiscoverBar;
- (_Bool)containsVideo;
- (_Bool)isMediaDataLoadedInCache;
- (void)loadPersistedFailedDSnapData:(id)arg1;
- (id)keyForMedia:(id)arg1 type:(id)arg2;
- (id)failedMediaDatastore;
- (id)sendSuccessUserDefaultsKey;
- (_Bool)mediaProcessingFinishedNotUploaded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)messageType;
- (long long)scaMessageType;
- (id)logEventName;
- (long long)mediaType;
- (void)updateWithDiscoverBlob:(id)arg1;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
