//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Friend, SCFriendActionButton, SCFriendProfileCellView, SCProfilePictureThumbnail, SCQuickAddController;

@protocol SCQuickAddControllerDelegate <NSObject>

@optional
- (void)quickAddController:(SCQuickAddController *)arg1 didDisplayProfilePictureOnCellView:(SCFriendProfileCellView *)arg2 onThumbnail:(SCProfilePictureThumbnail *)arg3 friend:(Friend *)arg4;
- (void)quickAddController:(SCQuickAddController *)arg1 didFinishFriendAction:(SCFriendActionButton *)arg2;
- (long long)sectionIndexOfQuickAdd;
@end

