//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, SOJUMultiSnapMetadata, SOJUStoryFrame;
@protocol SCSnapSendPreparer;

@interface SCMediaSendTaskConfiguration : NSObject <NSCoding>
{
    _Bool _postToMyStory;
    _Bool _isForwarded;
    id <SCSnapSendPreparer> _snapSendPreparer;
    NSArray *_userRecipients;
    NSArray *_invitedUserRecipients;
    NSArray *_officialStories;
    NSArray *_sharedStories;
    NSArray *_businessIds;
    NSArray *_mischiefs;
    NSArray *_mobStories;
    NSNumber *_postToMyStoryPrivacyOverride;
    NSDate *_storyUserPostedTimestamp;
    SOJUStoryFrame *_storyFraming;
    NSDictionary *_messageMetadata;
    NSArray *_blizzardEventsOnSuccess;
    NSString *_additionalText;
    SOJUMultiSnapMetadata *_multiSnapMetadata;
}

@property(readonly, nonatomic) SOJUMultiSnapMetadata *multiSnapMetadata; // @synthesize multiSnapMetadata=_multiSnapMetadata;
@property(readonly, nonatomic) _Bool isForwarded; // @synthesize isForwarded=_isForwarded;
@property(readonly, copy, nonatomic) NSString *additionalText; // @synthesize additionalText=_additionalText;
@property(readonly, copy, nonatomic) NSArray *blizzardEventsOnSuccess; // @synthesize blizzardEventsOnSuccess=_blizzardEventsOnSuccess;
@property(readonly, copy, nonatomic) NSDictionary *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, nonatomic) SOJUStoryFrame *storyFraming; // @synthesize storyFraming=_storyFraming;
@property(readonly, nonatomic) NSDate *storyUserPostedTimestamp; // @synthesize storyUserPostedTimestamp=_storyUserPostedTimestamp;
@property(readonly, nonatomic) NSNumber *postToMyStoryPrivacyOverride; // @synthesize postToMyStoryPrivacyOverride=_postToMyStoryPrivacyOverride;
@property(readonly, nonatomic) _Bool postToMyStory; // @synthesize postToMyStory=_postToMyStory;
@property(readonly, copy, nonatomic) NSArray *mobStories; // @synthesize mobStories=_mobStories;
@property(readonly, copy, nonatomic) NSArray *mischiefs; // @synthesize mischiefs=_mischiefs;
@property(readonly, copy, nonatomic) NSArray *businessIds; // @synthesize businessIds=_businessIds;
@property(readonly, copy, nonatomic) NSArray *sharedStories; // @synthesize sharedStories=_sharedStories;
@property(readonly, copy, nonatomic) NSArray *officialStories; // @synthesize officialStories=_officialStories;
@property(readonly, copy, nonatomic) NSArray *invitedUserRecipients; // @synthesize invitedUserRecipients=_invitedUserRecipients;
@property(readonly, copy, nonatomic) NSArray *userRecipients; // @synthesize userRecipients=_userRecipients;
@property(readonly, nonatomic) id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
- (void).cxx_destruct;
- (id)allRecipients;
- (_Bool)isRecipientSingleUser;
- (_Bool)isRecipientSingleGroup;
- (void)clearBlizzardEventsOnSuccess;
- (void)updateUserInviteRecipientsWithPhoneNumbers:(id)arg1;
- (void)updateUserRecipientsWithUserIds:(id)arg1;
- (void)updateGroupRecipientsWithGroupIds:(id)arg1;
- (void)removeStory;
- (void)removeUser:(id)arg1;
- (void)removeGroupId:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecipients:(id)arg1 invitedUserRecipients:(id)arg2 postToMyStory:(_Bool)arg3 myStoryPrivacyOverride:(id)arg4 officialStories:(id)arg5 sharedStories:(id)arg6 businessIds:(id)arg7 mobStories:(id)arg8 mischiefs:(id)arg9 storyUserPostedTimestamp:(id)arg10 storyFraming:(id)arg11 messageMetadata:(id)arg12 blizzardEventsOnSuccess:(id)arg13 additionalText:(id)arg14 multiSnapMetadata:(id)arg15 snapSendPreparer:(id)arg16 isForwarded:(_Bool)arg17;

@end

