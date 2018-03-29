//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCSearchActionable-Protocol.h"

@class NSString, UITapGestureRecognizer;
@protocol SCSearchActionHandling;

@interface SCSearchChatInputCollectionViewCell : UICollectionViewCell <SCSearchActionable>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <SCSearchActionHandling> _actionHandler;
}

@property(retain, nonatomic) id <SCSearchActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_didTapContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

