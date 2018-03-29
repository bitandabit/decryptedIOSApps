//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellController.h"

@class NSString, SCProfileV3ActionMenuItemCellView, UIImage;
@protocol SCProfileV3ActionMenuItemDelegate;

@interface SCProfileV3ActionMenuItemCellController : SCProfileV3CellController
{
    NSString *_label;
    UIImage *_icon;
    UIImage *_selectedImage;
    CDUnknownBlockType _tapBlock;
    _Bool _selected;
    SCProfileV3ActionMenuItemCellView *_cell;
    id <SCProfileV3ActionMenuItemDelegate> _actionDelegate;
}

@property(nonatomic) __weak id <SCProfileV3ActionMenuItemDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) SCProfileV3ActionMenuItemCellView *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)cellWasTapped:(id)arg1;
- (id)cellReuseIdentifier;
- (struct CGSize)sizeForCell;
- (Class)cellClass;
- (void)attachCellView:(id)arg1;
- (id)initWithActionViewModel:(id)arg1;

@end
