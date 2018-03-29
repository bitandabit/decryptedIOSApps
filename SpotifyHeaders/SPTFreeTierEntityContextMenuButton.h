//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "SPTFreeTierEntityContextMenuButtonViewModelDelegate.h"

@class NSString;

@interface SPTFreeTierEntityContextMenuButton : UIButton <SPTFreeTierEntityContextMenuButtonViewModelDelegate>
{
    id <SPTFreeTierEntityContextMenuButtonViewModel> _viewModel;
    struct UIEdgeInsets _alignmentRectInsetsOverride;
}

@property(readonly, nonatomic) id <SPTFreeTierEntityContextMenuButtonViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsetsOverride; // @synthesize alignmentRectInsetsOverride=_alignmentRectInsetsOverride;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didUpdateState:(unsigned long long)arg2;
- (id)createImageForState:(unsigned long long)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

