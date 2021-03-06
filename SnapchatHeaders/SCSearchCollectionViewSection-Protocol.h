//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString, NSValue, SCSearchCollectionViewSectionUpdateModel, SCSearchSectionHeaderModel, UICollectionReusableView, UICollectionViewCell, UIView;
@protocol NSCopying, SCSearchCollectionViewSectionDelegate, SCSearchCollectionViewSectionSupplementaryViewProviding, SCSearchIntentHandler;

@protocol SCSearchCollectionViewSection <NSObject>
@property(nonatomic) long long dataLoadingStatus;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler;
@property(nonatomic) __weak id <SCSearchCollectionViewSectionDelegate> delegate;
@property(copy, nonatomic) SCSearchCollectionViewSectionUpdateModel *sectionUpdateModel;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (UICollectionViewCell *)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (NSDictionary *)reuseCellClassesByIdentifiers;

@optional
- (long long)sectionContentMode;
- (NSValue *)sectionInsets;
- (NSDictionary *)sectionInfo;
- (double)minimumSectionLineSpacing;
- (double)minimumSectionInteritemSpacing;
- (void)collectionViewWillDisplayCell:(UICollectionViewCell *)arg1 atIndexInSection:(unsigned long long)arg2;
- (void)collectionViewWillDisplaySupplementaryView:(UICollectionReusableView *)arg1 forElementKind:(NSString *)arg2 atIndexInSection:(unsigned long long)arg3;
- (UIView *)customizedHeaderView;
- (SCSearchSectionHeaderModel *)sectionHeaderModel;
- (id <SCSearchCollectionViewSectionSupplementaryViewProviding>)supplementaryViewProvider;
- (void)applyConfiguration:(NSObject<NSCopying> *)arg1;
- (void)tearDown;
- (void)setUp;
@end

