//
//  DetailViewController.h
//  test
//
//  Created by Guest on 12/11/07.
//  Copyright (c) 2012年 Guest. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
