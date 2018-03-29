//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCollectionSectionViewModel.h"

@class NSString;

@interface SPTFreeTierCollectionSectionViewModelImplementation : NSObject <SPTFreeTierCollectionSectionViewModel>
{
    _Bool _sectionHeaderShowing;
    NSString *_title;
}

+ (id)sectionWithTitle:(id)arg1;
+ (id)hiddenSection;
@property(nonatomic, getter=isSectionHeaderShowing) _Bool sectionHeaderShowing; // @synthesize sectionHeaderShowing=_sectionHeaderShowing;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 sectionHeaderShowing:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

