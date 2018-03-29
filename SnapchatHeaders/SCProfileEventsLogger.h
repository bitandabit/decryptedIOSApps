//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface SCProfileEventsLogger : NSObject
{
    NSString *_profileSessionId;
    _Bool _profileSessionEnded;
    NSMutableSet *_availableSections;
    double _pageStartTimestamp;
}

+ (long long)getPageTypeFromPageName:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)logBluetoothNumericFailure;
- (void)logDiscoverPairingFailure;
- (void)_logPageEvent:(long long)arg1 viewTime:(double)arg2;
- (void)logPageViewTimeEvent:(long long)arg1;
- (void)logPageViewTimeEventStart;
- (void)logPairingSuccess:(_Bool)arg1 userAgent:(id)arg2;
- (long long)getProfilePageTypeFromPageName:(id)arg1;
- (long long)getVerificationType:(_Bool)arg1;
- (long long)getActionMethod:(id)arg1;
- (long long)getRequestSourceFromFriendSource:(long long)arg1;
- (void)logProfileInviteContactEnd:(id)arg1 inviteType:(long long)arg2 inviteUrl:(id)arg3;
- (void)logProfileInviteContactStart:(long long)arg1 inviteUrl:(id)arg2;
- (void)logTrophyPopupPageViewWithUnicode:(id)arg1 andTrophyLabel:(id)arg2;
- (void)logTrophyCasePageViewWithNumberOfTrophies:(unsigned long long)arg1;
- (void)logProfileContactInviteInitiate:(long long)arg1;
- (void)logProfileFriendDelete:(long long)arg1;
- (void)logProfileFriendRequestSent:(long long)arg1;
- (void)logProfileContactPermissionContinue:(long long)arg1 hasVerifiedNumber:(_Bool)arg2 source:(id)arg3;
- (void)logProfileContactPermissionGrant:(long long)arg1 hasVerifiedNumber:(_Bool)arg2 source:(id)arg3;
- (void)logProfileContactPermissionDeny:(long long)arg1 hasVerifiedNumber:(_Bool)arg2 source:(id)arg3;
- (void)logProfileSearchClear:(long long)arg1 charCount:(unsigned long long)arg2;
- (void)logProfilePhoneVerificationDialog:(long long)arg1 action:(_Bool)arg2;
- (void)logProfileAddressBookAddContactsFooter:(id)arg1;
- (void)logProfilePhoneVerificationFooter:(long long)arg1;
- (void)logProfileSearchPerform:(long long)arg1 charCount:(unsigned long long)arg2 keyStrokeCount:(unsigned long long)arg3 snapchatterCount:(unsigned long long)arg4 nonSnapchatterCount:(unsigned long long)arg5 friendSearchCount:(unsigned long long)arg6;
- (void)logProfilePageView:(long long)arg1;
- (void)logProfileMyContactsPageExit:(unsigned long long)arg1 snapchatterCountWithDisplayPic:(unsigned long long)arg2 nonSnapchatterCount:(unsigned long long)arg3 snapchatterAddCount:(unsigned long long)arg4 snapchatterAddCountWithDisplayPic:(unsigned long long)arg5 snapchatterAddInSearchCount:(unsigned long long)arg6 nonSnapchatterInviteCount:(unsigned long long)arg7 nonSnapchatterInviteInSearchCount:(unsigned long long)arg8 hasVerifiedNumber:(_Bool)arg9;
- (void)logProfileMyContactsContactPermissionContinue:(_Bool)arg1;
- (void)logProfileMyContactsContactPermissionGrant:(_Bool)arg1;
- (void)logProfileMyContactsContactPermissionDeny:(_Bool)arg1;
- (void)logProfileMyContactsSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 snapchatterCount:(unsigned long long)arg3 nonSnapchatterCount:(unsigned long long)arg4;
- (void)logProfileMyContactsSearchClear:(unsigned long long)arg1;
- (void)logProfileMyContactsContactInviteInitiate;
- (void)logProfileMyContactsFriendDelete;
- (void)logProfileMyContactsFriendRequestSent;
- (void)logProfileMyContactsPageView:(id)arg1 hasContactsAccess:(_Bool)arg2 hasVerifiedNumber:(_Bool)arg3;
- (void)logProfileMyFriendsPageExit:(unsigned long long)arg1 myFriendBlockCount:(unsigned long long)arg2 myFriendReAddCount:(unsigned long long)arg3 myFriendRemoveCount:(unsigned long long)arg4 myFriendNameEditCount:(unsigned long long)arg5 myFriendBlockInSearchCount:(unsigned long long)arg6 myFriendReAddInSearchCount:(unsigned long long)arg7 myFriendRemoveInSearchCount:(unsigned long long)arg8 myFriendNameEditInSearchCount:(unsigned long long)arg9;
- (void)logProfileMyFriendsSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 friendSearchCount:(unsigned long long)arg3;
- (void)logProfileMyFriendsSearchClear:(unsigned long long)arg1;
- (void)logProfileMyFriendsFriendDelete;
- (void)logProfileMyFriendsFriendRequestSent;
- (void)logProfileMyFriendsFriendBlock;
- (void)logProfileMyFriendsNameEdit:(id)arg1 display:(id)arg2;
- (void)logProfileMyFriendsPageView:(id)arg1;
- (void)logProfileNearbyPageExit:(unsigned long long)arg1 nearbyFriendCountWithDisplayPic:(unsigned long long)arg2 nearbyFriendAddCount:(unsigned long long)arg3 nearbyFriendAddCountWithDisplayPic:(unsigned long long)arg4;
- (void)logProfileNearByPageView:(id)arg1;
- (void)logProfileAddressBookPageExit:(id)arg1 snapchatterCount:(unsigned long long)arg2 snapchatterCountWithDisplayPic:(unsigned long long)arg3 nonSnapchatterCount:(unsigned long long)arg4 snapchatterAddCount:(unsigned long long)arg5 snapchatterAddCountWithDisplayPic:(unsigned long long)arg6 snapchatterAddInSearchCount:(unsigned long long)arg7 nonSnapchatterInviteCount:(unsigned long long)arg8 nonSnapchatterInviteInSearchCount:(unsigned long long)arg9 hasVerifiedNumber:(_Bool)arg10;
- (void)logProfileAddressBookEmpty;
- (void)logProfileAddressBookContactPermissionContinue:(_Bool)arg1 source:(id)arg2;
- (void)logProfileAddressBookContactPermissionGrant:(_Bool)arg1 source:(id)arg2;
- (void)logProfileAddressBookContactPermissionDeny:(_Bool)arg1 source:(id)arg2;
- (void)logProfileAddressBookSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 snapchatterCount:(unsigned long long)arg3 nonSnapchatterCount:(unsigned long long)arg4;
- (void)logProfileAddressBookSearchClear:(unsigned long long)arg1;
- (void)logProfileAddressBookRefresh;
- (void)logProfileAddressBookContactInviteInitiate;
- (void)logProfileAddressBookFriendDelete;
- (void)logProfileAddressBookFriendRequestSent;
- (void)logProfileAddressBookPageView:(id)arg1 source:(id)arg2 hasContactsAccess:(_Bool)arg3 hasVerifiedNumber:(_Bool)arg4;
- (void)logProfileUsernamePageExit:(unsigned long long)arg1 nonFriendCountWithDisplayPic:(unsigned long long)arg2 friendAddCount:(unsigned long long)arg3 friendAddCountWithDisplayPic:(unsigned long long)arg4;
- (void)logProfileUsernameSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 addedMeCount:(unsigned long long)arg3 addressBookCount:(unsigned long long)arg4 usernameCount:(unsigned long long)arg5 myFriendCount:(unsigned long long)arg6 verifiedUserCount:(unsigned long long)arg7;
- (void)logProfileUsernameSearchClear:(unsigned long long)arg1;
- (void)logProfileUsernameFriendDelete;
- (void)logProfileUsernameFriendRequestSent;
- (void)logProfileUsernamePageView:(id)arg1;
- (void)logProfileShareUsernameEndWithActivityType:(id)arg1 completed:(_Bool)arg2 errorMessage:(id)arg3 source:(long long)arg4;
- (void)logProfileShareUsernameStart:(id)arg1 source:(long long)arg2;
- (void)logProfileAddFriendsPageExit:(id)arg1 suggestFriendCount:(unsigned long long)arg2 suggestFriendCountWithDisplayPic:(unsigned long long)arg3 suggestFriendAddCount:(unsigned long long)arg4 suggestFriendAddCountWithDisplayPic:(unsigned long long)arg5;
- (void)logProfileAddFriendsPageExitCheetah;
- (void)_logProfileAddFriendsPageView:(id)arg1;
- (void)logProfileAddFriendsPageView:(long long)arg1 page:(long long)arg2;
- (void)logProfileShareSnapcodeEndWithActivityType:(id)arg1 completed:(_Bool)arg2 errorMessage:(id)arg3 source:(long long)arg4;
- (void)logProfileShareSnapcodeStart:(id)arg1 source:(long long)arg2;
- (void)logProfileSaveSnapcodeWithSource:(long long)arg1 isSuccess:(_Bool)arg2;
- (void)logProfileAddedMePageExit:(unsigned long long)arg1 newRequestCount:(unsigned long long)arg2 newRequestCountWithDisplayPic:(unsigned long long)arg3 requestAcceptCount:(unsigned long long)arg4 requestAcceptCountWithDisplayPic:(unsigned long long)arg5 requestBlockCount:(unsigned long long)arg6 requestIngoreCount:(unsigned long long)arg7 requestNameEditCount:(unsigned long long)arg8;
- (void)logProfileFriendRequestDelete:(_Bool)arg1 source:(long long)arg2 method:(id)arg3;
- (void)logProfileFriendRequestAccept:(_Bool)arg1 source:(long long)arg2;
- (void)logProfileFriendRequestBlock:(_Bool)arg1 source:(long long)arg2 method:(id)arg3;
- (void)logProfileFriendRequestIgnore:(_Bool)arg1 source:(long long)arg2 method:(id)arg3;
- (void)logProfileFriendRequestNameEdit:(_Bool)arg1 source:(long long)arg2 name:(id)arg3 display:(id)arg4;
- (void)logProfileAddedMePageView:(id)arg1;
- (void)logMiniProfileCancelButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4;
- (void)logMiniProfileAddFriendButton:(long long)arg1 page:(id)arg2 profileId:(id)arg3 friendPictureStatus:(id)arg4 viewLocation:(long long)arg5 logProfileId:(_Bool)arg6 shouldAttributeViewToOurStory:(_Bool)arg7;
- (void)logMiniProfileSendAccount:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4;
- (void)logMiniProfileShareButtonWithFriend:(id)arg1 storyPrivacy:(id)arg2 parentViewController:(id)arg3 activityType:(id)arg4 completed:(_Bool)arg5 errorMessage:(id)arg6 page:(id)arg7;
- (void)logMiniProfileSettingsGearButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4;
- (void)logMiniProfileVideoButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4;
- (void)logMiniProfileCallButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4;
- (void)logMiniProfileSnapButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4;
- (void)logMiniProfileChatButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4;
- (void)logMiniProfileExit:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4;
- (void)logMiniProfileView:(long long)arg1 page:(id)arg2 viewLocation:(long long)arg3 profileType:(long long)arg4 profileId:(id)arg5 logProfileId:(_Bool)arg6 shouldAttributeViewToOurStory:(_Bool)arg7;
- (void)logProfilePicturesSharePictures:(id)arg1 withPicture:(_Bool)arg2 forUsername:(id)arg3;
- (void)logProfilePicturesDeletePictures:(long long)arg1 forUsername:(id)arg2;
- (void)logProfilePicturesTakeNewPictures:(long long)arg1 forUsername:(id)arg2;
- (void)logProfilePicturesPageView;
- (void)logProfileAddFriendSearchAction:(long long)arg1;
- (void)logFindFriendNumbers:(unsigned long long)arg1 maxNumberLength:(unsigned long long)arg2;
- (void)logProfileStorySettingPageview:(long long)arg1;
- (void)logProfileMainPageExit:(id)arg1 hasProfilePic:(_Bool)arg2 newAddedMeCount:(unsigned long long)arg3;
- (void)logProfileDisplayNameChange:(id)arg1;
- (void)logProfilePromptAction:(long long)arg1;
- (void)logProfileSessionEnd;
- (void)logProfileMainPageViewWithNewFriendsCount:(long long)arg1;
- (void)addAvailableProfileSection:(id)arg1;
- (id)getSessionId;
- (id)getOrCreateSessionId;
- (id)init;

@end
