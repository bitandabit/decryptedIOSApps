//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCProfileV3CellViewDelegate-Protocol.h"

@protocol SCProfileV3CellControllerDelegate;

@interface SCProfileV3CellController : NSObject <SCProfileV3CellViewDelegate>
{
    _Bool _hidden;
    id <SCProfileV3CellControllerDelegate> _delegate;
}

@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <SCProfileV3CellControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cellWasLongPressed:(id)arg1;
- (void)cellWasTapped:(id)arg1;
- (id)getAnalyticsSections;
- (void)willDisplayCell:(id)arg1;
- (void)refreshCell;
- (id)uniqueCellIdentifier;
- (void)attachCellView:(id)arg1;
- (struct CGSize)sizeForCell;
- (Class)cellClass;
- (id)cellReuseIdentifier;

@end
