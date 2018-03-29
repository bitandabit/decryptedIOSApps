//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSRegularExpression, SPTGeniusAnnotation;

@interface SPTGeniusCardView : UIView
{
    SPTGeniusAnnotation *_annotation;
    NSRegularExpression *_lineBreakingPattern;
}

@property(retain, nonatomic) NSRegularExpression *lineBreakingPattern; // @synthesize lineBreakingPattern=_lineBreakingPattern;
@property(retain, nonatomic) SPTGeniusAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (long long)linesBeginWithPattern:(id)arg1 inAttributedString:(id)arg2 byLayoutManager:(id)arg3;
- (_Bool)pattern:(id)arg1 inString:(id)arg2;
- (id)repairLineBreaksFromPattern:(id)arg1 inAttributedString:(id)arg2 byLayoutManager:(id)arg3 forTextView:(id)arg4;
- (id)initWithAnnotation:(id)arg1;

@end
