//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDelegate.h"

@class NSString, SPTEmbeddedCollectionViewViewModel;

@interface SPTSearchTableViewCellEmbeddedCollectionViewDelegate : NSObject <UICollectionViewDelegate>
{
    SPTEmbeddedCollectionViewViewModel *_viewModel;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTEmbeddedCollectionViewViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

