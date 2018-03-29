//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellController.h"

#import "SCProfileV3ActionBarDelegate-Protocol.h"
#import "SCShareUsernameControllerDelegate-Protocol.h"

@class SCProfileV3ActionBarCellView, SCUserSession;

@interface SCProfileV3ActionBarCellController : SCProfileV3CellController <SCProfileV3ActionBarDelegate, SCShareUsernameControllerDelegate>
{
    SCUserSession *_userSession;
    SCProfileV3ActionBarCellView *_cell;
}

- (void).cxx_destruct;
- (void)presentActivityViewController:(id)arg1 shareUsernameController:(id)arg2;
- (void)_shareUsername;
- (void)_shareSnapcode;
- (void)trophiesWasTapped;
- (void)shareWasTapped;
- (void)bitmojiWasTapped;
- (void)refreshCell;
- (struct CGSize)sizeForCell;
- (Class)cellClass;
- (id)cellReuseIdentifier;
- (void)attachCellView:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

@end

