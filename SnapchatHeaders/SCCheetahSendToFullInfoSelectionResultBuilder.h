//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface SCCheetahSendToFullInfoSelectionResultBuilder : NSObject
{
    _Bool _addToMyStory;
    NSNumber *_myStoryPrivacyOverride;
    NSArray *_recipients;
    NSArray *_invitedRecipients;
    NSArray *_suggestRecipients;
    NSArray *_contactSnapchatterRecipients;
    NSArray *_usernameSearchedRecipients;
    NSArray *_mischiefsSelected;
    NSArray *_officialStoriesSelected;
    NSArray *_sharedStoriesSelected;
    NSArray *_groupStoriesSelected;
    NSArray *_businessProfilesSelected;
}

+ (id)withCheetahSendToFullInfoSelectionResult:(id)arg1;
- (void).cxx_destruct;
- (id)setBusinessProfilesSelected:(id)arg1;
- (id)setGroupStoriesSelected:(id)arg1;
- (id)setSharedStoriesSelected:(id)arg1;
- (id)setOfficialStoriesSelected:(id)arg1;
- (id)setMischiefsSelected:(id)arg1;
- (id)setUsernameSearchedRecipients:(id)arg1;
- (id)setContactSnapchatterRecipients:(id)arg1;
- (id)setSuggestRecipients:(id)arg1;
- (id)setInvitedRecipients:(id)arg1;
- (id)setRecipients:(id)arg1;
- (id)setMyStoryPrivacyOverride:(id)arg1;
- (id)setAddToMyStory:(_Bool)arg1;
- (id)build;

@end

