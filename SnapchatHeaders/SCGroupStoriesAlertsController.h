//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCGroupStoriesAlertsController : NSObject
{
}

+ (void)showMaxGroupStoriesSelectedWarningWithCompletion:(CDUnknownBlockType)arg1;
+ (void)verifyIntentToLeavePublication:(id)arg1 willBlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showFirstWatchWarningForPublicationIfNecessary:(id)arg1 userSession:(id)arg2 onWatch:(CDUnknownBlockType)arg3 onDetails:(CDUnknownBlockType)arg4;
+ (void)warnIfBlockedUsersInPublication:(id)arg1 showSecondaryAction:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showOutOfGeofenceWarningForPublication:(id)arg1 userSession:(id)arg2 onSettings:(CDUnknownBlockType)arg3;
+ (id)_descriptionForGeoPublication:(id)arg1 hasBlockedFriends:(_Bool)arg2;
+ (id)_firstTimePostingGeoPublicationItems:(id)arg1 hasBlockedFriends:(_Bool)arg2 userSession:(id)arg3;
+ (void)_showFirstTimePostingGeoPublication:(id)arg1 userSession:(id)arg2 onAddSnap:(CDUnknownBlockType)arg3 onDetails:(CDUnknownBlockType)arg4 onCancel:(CDUnknownBlockType)arg5;
+ (void)showFirstTimePostingForPublicationIfNecessary:(id)arg1 userSession:(id)arg2 onAddSnap:(CDUnknownBlockType)arg3 onDetails:(CDUnknownBlockType)arg4 onCancel:(CDUnknownBlockType)arg5;
+ (void)_showFirstTimePostingPrivatePublication:(id)arg1 onAddSnap:(CDUnknownBlockType)arg2 onDetails:(CDUnknownBlockType)arg3 onCancel:(CDUnknownBlockType)arg4;
+ (void)_showFirstTimePostingChatPublication:(id)arg1 onAddSnap:(CDUnknownBlockType)arg2 onCancel:(CDUnknownBlockType)arg3;
+ (void)_showFirstTimePostingCustomPublication:(id)arg1 onAddSnap:(CDUnknownBlockType)arg2 onDetails:(CDUnknownBlockType)arg3 onCancel:(CDUnknownBlockType)arg4;

@end

