//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStackedChatTableViewCell.h"

@protocol SCChatCellNoteGestureDelegate;

@interface SCStackedNoteChatTableViewCell : SCStackedChatTableViewCell
{
    id <SCChatCellNoteGestureDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)stopAnimations;
- (void)startAnimations;
- (void)clearContents;
- (id)stackedNoteViewModel;

@end

