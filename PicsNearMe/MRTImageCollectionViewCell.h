//
//  MRTImageCollectionViewCell.h
//  PicsNearMe
//
//  Created by Michele Titolo on 5/16/14.
//  Copyright (c) 2014 Michele Titolo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MRTImageCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (void)setImageWithURLString:(NSString*)string;

@end
