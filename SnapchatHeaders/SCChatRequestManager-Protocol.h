//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SCChatMediaContent, SCChatMessageV3;
@protocol SCChatRequestManager;

@protocol SCChatRequestManager <NSObject>
+ (id <SCChatRequestManager>)shared;
- (void)toggleNotificationStatusForFriend:(NSString *)arg1 conversationId:(NSString *)arg2 enabled:(_Bool)arg3 source:(long long)arg4 successBlock:(void (^)(NSHTTPURLResponse *, id))arg5 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg6;
- (void)uploadReplyMediaWithStoryId:(NSString *)arg1 key:(NSString *)arg2 iv:(NSString *)arg3 type:(long long)arg4 conversationId:(NSString *)arg5 successBlock:(void (^)(NSHTTPURLResponse *, id))arg6 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg7 uploadId:(NSString *)arg8;
- (void)markViewedSnapsWithParameters:(NSDictionary *)arg1 successBlock:(void (^)(NSHTTPURLResponse *, id))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3;
- (void)sendSearchDownloadRequestForStoryId:(NSString *)arg1 snapId:(NSString *)arg2 conversationId:(NSString *)arg3 metadataCompletionBlock:(void (^)(_Bool, SCSearchStoryMetadata *))arg4 storyDownloadCompletionBlock:(void (^)(_Bool, SCStorySnapMediaContent *))arg5;
- (void)sendMapDownloadRequestForPoiId:(NSString *)arg1 conversationId:(NSString *)arg2 completion:(void (^)(_Bool, SCMapPoiShareMetadata *))arg3;
- (void)sendMapDownloadRequestForStoryId:(NSString *)arg1 conversationId:(NSString *)arg2 metadataCompletionBlock:(void (^)(_Bool, SCMapSnapMetadata *))arg3 storyDownloadCompletionBlock:(void (^)(_Bool, SCStorySnapMediaContent *))arg4;
- (void)sendStoryDownloadRequestForStoryId:(NSString *)arg1 senderUsername:(NSString *)arg2 sequenceNumber:(NSNumber *)arg3 conversationId:(NSString *)arg4 metadataCompletionBlock:(void (^)(_Bool, SCStorySnapMetadata *, SCChatSnapchatter *, SCContributionStoryPublisher *))arg5 storyDownloadCompletionBlock:(void (^)(_Bool, SCStorySnapMediaContent *))arg6 thumbnailDownloadCompletionBlock:(void (^)(_Bool, UIImage *))arg7;
- (void)sendSnapchatterDownloadRequestForUsername:(NSString *)arg1 successBlock:(void (^)(SCChatSnapchatter *))arg2 failureBlock:(void (^)(long long))arg3;
- (void)sendAddressThumbnailDownloadRequestForAddress:(NSString *)arg1 mediaId:(NSString *)arg2 successBlock:(void (^)(NSString *))arg3 failureBlock:(void (^)(long long))arg4;
- (void)sendURLThumbnailDownloadRequestForThumbnailUrl:(NSString *)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(long long))arg3;
- (void)sendURLMetadataDownloadRequestForConversationId:(NSString *)arg1 messageId:(NSString *)arg2 urls:(NSArray *)arg3 needSpamCheck:(_Bool)arg4 successBlock:(void (^)(NSDictionary *))arg5 failureBlock:(void (^)(NSError *))arg6;
- (void)makeChatMedias:(NSArray *)arg1 recipients:(NSArray *)arg2 groups:(NSArray *)arg3 successBlock:(void (^)(NSDictionary *))arg4 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg5;
- (void)uploadMediaContent:(SCChatMediaContent *)arg1 inMessage:(SCChatMessageV3 *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)increaseMediaDownloadPriorityForMediaId:(NSString *)arg1;
- (void)sendMediaDownloadRequestForConversationId:(NSString *)arg1 messageId:(NSString *)arg2 messageBodyType:(long long)arg3 media:(SCChatMediaContent *)arg4 senderUsername:(NSString *)arg5 userInitiated:(_Bool)arg6 successBlock:(void (^)(void))arg7 failureBlock:(void (^)(long long))arg8;
@end

